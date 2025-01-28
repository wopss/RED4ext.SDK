#pragma once

#include <cstdint>
#include <functional>
#include <limits>
#include <memory>
#include <new>
#include <type_traits>

#include <RED4ext/Common.hpp>
#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Detail/Memory.hpp>
#include <RED4ext/Exception.hpp>
#include <RED4ext/Memory/Pools.hpp>
#include <RED4ext/Memory/Vault.hpp>

namespace RED4ext
{
template<typename T>
requires Detail::IsPointer<T>
#if RED4EXT_HAS_CPP23
using AllocationResult = std::allocation_result<T*>;
#else
struct [[nodiscard]] AllocationResult
{
    T ptr;
    std::size_t count;
};
#endif
RED4EXT_ASSERT_SIZE(AllocationResult<void*>, 0x10);
RED4EXT_ASSERT_OFFSET(AllocationResult<void*>, ptr, 0x0);
RED4EXT_ASSERT_OFFSET(AllocationResult<void*>, count, 0x8);

template<typename T, typename Pool = Memory::PoolDefault>
requires Detail::IsMemoryPool<Pool>
class Allocator
{
public:
    // TODO: See propagate_on_container_copy_assignment, propagate_on_container_move_assignment and
    // propagate_on_container_swap.
    using value_type = T;
    using pool_type = Pool;
    using size_type = std::size_t;
    using alignment_type = std::uint32_t;
    using difference_type = std::ptrdiff_t;
    using allocation_result_type = AllocationResult<T*>;

    using propagate_on_container_move_assignment = std::true_type;

    static_assert(
        !std::is_const_v<value_type>,
        "The C++ Standard forbids containers of const elements because RED4ext::Allocator<const T> is ill-formed.");

    constexpr Allocator() noexcept = default;
    constexpr Allocator(const Allocator&) noexcept = default;
    constexpr Allocator(Allocator&&) noexcept = default;

    template<typename U>
    constexpr Allocator(const Allocator<U, Pool>&) noexcept
    {
    }

    constexpr Allocator& operator=(const Allocator&) noexcept = default;
    constexpr Allocator& operator=(Allocator&&) noexcept = default;

    constexpr ~Allocator() noexcept = default;

    /*
     * Not using function overloading because then it will be up to the compiler to decide how the vtbl is ordered.
     * Since we want a specific ordering the preffix "WithAlignment" is added to the functions that contain the
     * alignment parameter.
     *
     * Also all virtual [re]allocation functions are private. If someone wants to allocate exactly N bytes, then they
     * can use Allocator<char>.
     */

private:
    [[nodiscard]] virtual AllocationResult<void*> AllocateAtLeastBytes(size_type aBytes) const
    {
        static_assert(sizeof(value_type) > 0,
                      "The type must be complete before calling 'Allocator::AllocateAtLeastBytes'");
        return InvokeAllocationFunction<size_type>(Detail::AddressHashes::Memory_Vault_Alloc, aBytes,
                                                   [this, aBytes]() { RiseOom(aBytes, 8); });
    }

    [[nodiscard]] virtual AllocationResult<void*> AllocateAtLeastBytesWithAlignment(size_type aBytes,
                                                                                    alignment_type aAlignment) const
    {
        static_assert(sizeof(value_type) > 0,
                      "The type must be complete before calling 'Allocator::AllocateAtLeastBytesWithAlignment'");
        return InvokeAllocationFunction<size_type, alignment_type>(Detail::AddressHashes::Memory_Vault_AllocAligned,
                                                                   aBytes, aAlignment, [this, aBytes, aAlignment]()
                                                                   { RiseOom(aBytes, aAlignment); });
    }

    [[nodiscard]] virtual AllocationResult<void*> ReallocateAtLeastBytes(
        const allocation_result_type& aPreviousAllocation, size_type aBytes) const
    {
        static_assert(sizeof(value_type) > 0,
                      "The type must be complete before calling 'Allocator::ReallocateAtLeastBytes'");
        return InvokeAllocationFunction<const allocation_result_type&, size_type>(
            Detail::AddressHashes::Memory_Vault_Realloc, aPreviousAllocation, aBytes,
            [this, aBytes]()
            {
                if (aBytes)
                {
                    RiseOom(aBytes, 8);
                }
            });
    }

    [[nodiscard]] virtual AllocationResult<void*> ReallocateAtLeastBytesWithAlignment(
        const allocation_result_type& aPreviousAllocation, size_type aBytes, alignment_type aAlignment) const
    {
        static_assert(sizeof(value_type) > 0,
                      "The type must be complete before calling 'Allocator::ReallocateAtLeastBytesWithAlignment'");
        return InvokeAllocationFunction<const allocation_result_type&, size_type, alignment_type>(
            Detail::AddressHashes::Memory_Vault_ReallocAligned, aPreviousAllocation, aBytes, aAlignment,
            [this, aBytes, aAlignment]()
            {
                if (aBytes)
                {
                    RiseOom(aBytes, aAlignment);
                }
            });
    }

public:
    virtual void Deallocate(const allocation_result_type& aPreviousAllocation) const
    {
        InvokeGenericFunction<const allocation_result_type&>(Detail::AddressHashes::Memory_Vault_Free,
                                                             aPreviousAllocation);
    }

    virtual void sub_28(void* a1) const
    {
        InvokeGenericFunction(Detail::AddressHashes::Memory_Vault_Unk1, a1);
    }

    [[nodiscard]] virtual const std::uint32_t GetHandle() const
    {
        auto pool = pool_type::Get();
        return pool->handle;
    }

    [[nodiscard]] T* Allocate(size_type aObjects) const
    {
        auto result = AllocateAtLeast(aObjects);
        return result.ptr;
    }

    [[nodiscard]] T* Allocate(size_type aObjects, alignment_type aAlignment) const
    {
        auto result = AllocateAtLeast(aObjects, aAlignment);
        return result.ptr;
    }

    [[nodiscard]] allocation_result_type AllocateAtLeast(size_type aObjects) const
    {
        auto size = CalculateByteCount(aObjects);
        auto result = AllocateAtLeastBytes(size);

        return {static_cast<T*>(result.ptr), result.count};
    }

    [[nodiscard]] allocation_result_type AllocateAtLeast(size_type aObjects, alignment_type aAlignment) const
    {
        auto size = CalculateByteCount(aObjects);
        auto result = AllocateAtLeastBytesWithAlignment(size, aAlignment);

        return {static_cast<T*>(result.ptr), result.count};
    }

    [[nodiscard]] T* Reallocate(T* aMemory, size_type aObjects) const
    {
        return Reallocate({aMemory, 0}, aObjects);
    }

    [[nodiscard]] T* Reallocate(const allocation_result_type& aPreviousAllocation, size_type aObjects) const
    {
        auto result = ReallocateAtLeast(aPreviousAllocation, aObjects);
        return result.ptr;
    }

    [[nodiscard]] T* Reallocate(T* aMemory, size_type aObjects, alignment_type aAlignment) const
    {
        return Reallocate({aMemory, 0}, aObjects, aAlignment);
    }

    [[nodiscard]] T* Reallocate(const allocation_result_type& aPreviousAllocation, size_type aObjects,
                                alignment_type aAlignment) const
    {
        auto result = ReallocateAtLeast(aPreviousAllocation, aObjects, aAlignment);
        return result.ptr;
    }

    [[nodiscard]] allocation_result_type ReallocateAtLeast(T* aMemory, size_type aObjects) const
    {
        return ReallocateAtLeast({aMemory, 0}, aObjects);
    }

    [[nodiscard]] allocation_result_type ReallocateAtLeast(const allocation_result_type& aPreviousAllocation,
                                                           size_type aObjects) const
    {
        auto size = CalculateByteCount(aObjects);
        auto result = ReallocateAtLeastBytes(aPreviousAllocation, size);

        return {static_cast<T*>(result.ptr), result.count};
    }

    [[nodiscard]] allocation_result_type ReallocateAtLeast(T* aMemory, size_type aObjects,
                                                           alignment_type aAlignment) const
    {
        return ReallocateAtLeast({aMemory, 0}, aObjects, aAlignment);
    }

    [[nodiscard]] allocation_result_type ReallocateAtLeast(const allocation_result_type& aPreviousAllocation,
                                                           size_type aObjects, alignment_type aAlignment) const
    {
        auto size = CalculateByteCount(aObjects);
        auto result = ReallocateAtLeastBytesWithAlignment(aPreviousAllocation, size, aAlignment);

        return {static_cast<T*>(result.ptr), result.count};
    }

    void Deallocate(T* aMemory) const
    {
        Deallocate({aMemory, 0});
    }

    void Deallocate(T* aMemory, size_type aObjects) const
    {
        Deallocate({aMemory, aObjects});
    }

#pragma region STL
    [[nodiscard]] T* allocate(size_type aObjects)
    {
        return Allocate(aObjects);
    }

#if RED4EXT_HAS_CPP23
    [[nodiscard]] std::allocation_result<T*> allocate_at_least(std::size_t aObjects)
    {
        return AllocateAtLeast(aObjects);
    }
#endif

    void deallocate(T* aMemory, size_type aObjects)
    {
        Deallocate(aMemory, aObjects);
    }
#pragma endregion

private:
    [[nodiscard]] static constexpr size_type CalculateByteCount(size_type aObjects)
    {
        constexpr size_t typeSize = sizeof(T);
        constexpr size_type maxSize = (std::numeric_limits<size_type>::max)() / typeSize;

        // Check if overflow is possible.
        if (maxSize < aObjects)
        {
            throw Exception("bad array new length");
        }

        return aObjects * typeSize;
    }

    [[nodiscard]] static pool_type* GetPool()
    {
        auto vault = Memory::Vault::Get();
        auto& poolRegistry = vault->poolRegistry;

        static auto pool = poolRegistry.Get<pool_type>(pool_type::Name);
        return pool;
    }

    [[nodiscard]] static Memory::Vault* GetAllocatorStorage()
    {
        const auto pool = GetPool();
        return pool->storage->GetAllocatorStorage<Memory::Vault>();
    }

    /**
     * @brief Invoke a generic function on the allocator's storage.
     *
     * @note Argument types are not using universal reference because it is necessary to control how the parameters are
     * passed to the real function. We don't want unexpected lvalue references to be used.
     */
    template<typename... Args>
    static void InvokeGenericFunction(std::uintptr_t aOffset, Args... aArgs)
    {
        auto storage = GetAllocatorStorage();

        RelocFunc<void (*)(Memory::Vault*, Args...)> func(aOffset);
        func(storage, std::forward<Args>(aArgs)...);
    }

    /**
     * @brief Invoke an allocation function on the allocator's storage.
     *
     * @note See notes of InvokeFunction<void>.
     */
    template<typename... Args>
    [[nodiscard]] static AllocationResult<void*> InvokeAllocationFunction(std::uintptr_t aOffset, Args... aArgs,
                                                                          const std::function<void()>& aOomHandler)
    {
        auto storage = GetAllocatorStorage();

        /*
         * All [re]alloc functions have the following typedef:
         *  AllocationResult [Re]Alloc(Vault* aVault, [AllocationResult& aPreviousAllocation], uint32_t aSize,
         *                             [uint32_t aAlignment])
         *
         * Because "REDfunc" is using a variable to call them in memory we cannot abuse the __fastcall convention,
         * thus it is necessary to use the following typedef:
         *  void [Re]Alloc(Vault* aVault, AllocationResult* aResult, [AllocationResult& aPreviousAllocation],
         *                 uint32_t aSize, [uint32_t aAlignment])
         *
         * Specifing the RDX directly and using void as return type should not cause problems when calling these
         * functions, doing something else the calls will be ill-formed.
         */
        RelocFunc<void (*)(Memory::Vault*, AllocationResult<void*>&, Args...)> func(aOffset);

        AllocationResult<void*> result{};
        func(storage, result, std::forward<Args>(aArgs)...);

        if (!result.ptr)
        {
            aOomHandler();
        }

        return result;
    }

    static void RiseOom(size_type aSize, alignment_type aAlignment)
    {
        auto pool = GetPool();

        using func_t = void (*)(Memory::PoolStorage*, size_type, alignment_type);
        RelocFunc<func_t> func(Detail::AddressHashes::Memory_PoolStorage_OOM);
        func(pool->storage, aSize, aAlignment);
    }
};
RED4EXT_ASSERT_SIZE(Allocator<void*>, 0x8);

template<typename T1, typename P1, typename T2, typename P2>
constexpr bool operator==(const Allocator<T1, P1>&, const Allocator<T2, P2>&) noexcept
{
    return std::is_same_v<P1, P2>;
}
} // namespace RED4ext
