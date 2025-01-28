#pragma once

#include <cstdint>
#include <iterator>
#include <memory>
#include <type_traits>

namespace RED4ext
{
namespace Memory
{
struct PoolInfo;
struct IAllocator;
} // namespace Memory

namespace Detail
{
template<typename T>
concept IsPointer = std::is_pointer_v<T>;

template<typename T>
struct AddressResolverOverride : std::false_type
{
    inline static uintptr_t Resolve(T aHash)
    {
        return 0;
    }
};

template<typename T>
struct AllocatorHook : std::false_type
{
};

template<typename T>
struct ConstructorHook : std::false_type
{
};

template<typename T>
struct AfterConstructedHook : std::false_type
{
};

template<typename T>
struct BeforeDestructedHook : std::false_type
{
};

template<typename T>
concept HasAllocatorHook = AllocatorHook<T>::value;

// clang-format off
template<typename T>
concept HasStaticAllocator = requires(T*)
{
    { T::AllocatorType::Get() } -> std::convertible_to<Memory::IAllocator*>;
};
// clang-format on

template<typename T>
concept HasStaticAllocatorOrHook = HasStaticAllocator<T> || HasAllocatorHook<T>;

// clang-format off
template<typename T>
concept HasDynamicAllocator = requires(T* t)
{
    { t->GetAllocator() } -> std::convertible_to<Memory::IAllocator*>;
};
// clang-format on

template<typename T>
concept HasAnyAllocator = HasDynamicAllocator<T> || HasStaticAllocator<T>;

template<typename T>
concept HasAnyAllocatorOrHook = HasAnyAllocator<T> || HasAllocatorHook<T>;

template<typename T>
struct StaticAllocatorTypeResolver : std::false_type
{
};

template<typename T>
requires HasStaticAllocator<T>
struct StaticAllocatorTypeResolver<T> : std::true_type
{
    using type = typename T::AllocatorType;
};

template<typename T>
using ResolveAllocatorType = typename StaticAllocatorTypeResolver<T>::type;

template<typename T>
concept IsSafeDestructible =
    std::is_destructible_v<T> && (!std::is_polymorphic_v<T> || std::has_virtual_destructor_v<T>);

template<typename T>
concept IsAllocator = std::is_base_of_v<Memory::IAllocator, T>;

template<typename T, typename size_type = std::allocator_traits<T>::size_type,
         typename alignment_type = T::alignment_type, typename allocation_result_type = T::allocation_result_type>
concept IsAllocator_New = requires(T t)
{
    // clang-format off
    { t.AllocateAtLeast(std::declval<size_type>()) } -> std::same_as<allocation_result_type>;
    { t.AllocateAtLeast(std::declval<size_type>(), std::declval<alignment_type>()) } -> std::same_as<allocation_result_type>;
    { t.ReallocateAtLeast(std::declval<const allocation_result_type&>(), std::declval<size_type>()) } -> std::same_as<allocation_result_type>;
    { t.ReallocateAtLeast(std::declval<const allocation_result_type&>(), std::declval<size_type>(), std::declval<alignment_type>()) } -> std::same_as<allocation_result_type>;
    { t.Deallocate(std::declval<const allocation_result_type&>()) } -> std::same_as<void>;
    { t.sub_28(std::declval<void*>()) } -> std::same_as<void>;
    { t.GetHandle() } -> std::same_as<std::uint32_t>;
    // clang-format on
};

template<typename T>
concept IsMemoryPool = std::is_base_of_v<Memory::PoolInfo, T> && requires(T)
{
    // clang-format off
    { T::Name } -> std::convertible_to<const char*>;
    // clang-format on
};

template<std::input_iterator InputIt, std::forward_iterator ForwardIt>
inline ForwardIt UninitializedMoveIfNoexcept(const InputIt aFirst, const InputIt aLast, ForwardIt aDest)
{
    using valueType = typename std::iterator_traits<InputIt>::value_type;
    if constexpr (std::is_nothrow_move_constructible_v<valueType> || !std::is_copy_constructible_v<valueType>)
    {
        return std::uninitialized_move(aFirst, aLast, aDest);
    }
    else
    {
        return std::uninitialized_copy(aFirst, aLast, aDest);
    }
}
} // namespace Detail
} // namespace RED4ext
