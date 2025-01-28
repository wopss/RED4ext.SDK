#pragma once

#include <algorithm>
#include <cassert>
#include <concepts>
#include <cstdint>
#include <iterator>
#include <limits>
#include <memory>
#include <optional>
#include <type_traits>

#include <RED4ext/Common.hpp>
#include <RED4ext/Detail/Containers/DynArrayIterator.hpp>
#include <RED4ext/Detail/Memory.hpp>
#include <RED4ext/Exception.hpp>
#include <RED4ext/Memory/Allocator.hpp>
#include <RED4ext/Utils.hpp>

namespace RED4ext
{
namespace Containers
{
template<typename T, typename Alloc = Allocator<T, Memory::PoolDefault>>
requires Detail::IsAllocator_New<Alloc>
struct DynArray
{
    using AllocatorType = typename std::allocator_traits<Alloc>::template rebind_alloc<T>;
    using AllocatorTraits = std::allocator_traits<AllocatorType>;

    using ValueType = T;
    using Reference = T&;
    using ConstReference = const T&;
    using Pointer = typename AllocatorTraits::pointer;
    using ConstPointer = typename AllocatorTraits::const_pointer;

    using SizeType = std::uint32_t;
    using DifferenceType = typename AllocatorTraits::difference_type;

    using Iterator = Detail::DynArrayIterator<T, DynArray>;
    using ConstIterator = Detail::DynArrayIterator<const T, DynArray>;
    using ReverseIterator = std::reverse_iterator<Iterator>;
    using ConstReverseIterator = std::reverse_iterator<ConstIterator>;

    /*
     * Future-proof assert.
     *
     * The game stores the allocator as the last entry in the "entries" field (entries[capacity]). The DynArray /
     * DynamicBuffer always allocate capacity to fit this allocator.
     *
     * But, I cannot figure out how CDPR pass their allocators in constructor, thus our class will use a placement
     * new to store the allocator in the "entries" pointer.
     *
     * From what I see the size of the allocators is always 8. This assert will make sure that the size of the
     * allocators used in the template parameter will never be higher than of "RED4ext::Allocator" to prevent
     * undefined behavior (e.g. constructing the allocator and overriding some unrelated memory).
     *
     * We could allocate more memory to fit a custom allocator (sizeof(TAllocator) > 8) but I saw that the functions
     * related to the DynArray are always using 8 bytes for the allocator.
     */
    static_assert(sizeof(AllocatorType) == sizeof(Allocator<void*>),
                  "The size of the specified allocator must be equal with the size of 'RED4ext::Allocator'");

    DynArray() noexcept
        : DynArray(AllocatorType())
    {
    }

    explicit DynArray(const AllocatorType& aAllocator) noexcept
        : entries(nullptr)
        , size(0)
        , capacity(0)
    {
        SetAllocator(aAllocator);
    }

    explicit DynArray(SizeType aCount, const AllocatorType& aAllocator = AllocatorType())
        : DynArray(aAllocator)
    {
        Construct(aCount, std::uninitialized_value_construct_n<Iterator, SizeType>, begin(), aCount);
    }

    DynArray(SizeType aCount, const T& aValue, const AllocatorType& aAllocator = AllocatorType())
        : DynArray(aAllocator)
    {
        Construct(aCount, std::uninitialized_fill_n<Iterator, SizeType, T>, begin(), aCount, aValue);
    }

    template<typename InputIt>
    requires std::input_iterator<InputIt> DynArray(InputIt aFirst, InputIt aLast,
                                                   const AllocatorType& aAllocator = AllocatorType())
        : DynArray(aAllocator)
    {
        using itCategory = typename std::iterator_traits<InputIt>::iterator_category;
        if constexpr (std::is_convertible_v<itCategory, std::forward_iterator_tag>)
        {
            const auto newCapacity = static_cast<SizeType>(std::distance(aFirst, aLast));
            Construct(newCapacity, std::uninitialized_copy<InputIt, Iterator>, aFirst, aLast, begin());
        }
        else
        {
            for (; aFirst != aLast; ++aFirst)
            {
                EmplaceBack(*aFirst);
            }
        }
    }

    DynArray(std::initializer_list<T> aInit, const AllocatorType& aAllocator = AllocatorType())
        : DynArray(aInit.begin(), aInit.end(), aAllocator)
    {
    }

    DynArray(const DynArray& aOther)
        : DynArray(aOther, AllocatorTraits::select_on_container_copy_construction(aOther.GetAllocator()))
    {
    }

    DynArray(const DynArray& aOther, const AllocatorType& aAllocator)
        : DynArray(aOther.begin(), aOther.end(), aAllocator)
    {
    }

    DynArray(DynArray&& aOther) noexcept
        : DynArray(std::move(aOther.GetAllocator()))
    {
        Swap(aOther);
    }

    DynArray(DynArray&& aOther, const AllocatorType& aAllocator)
        : DynArray(aAllocator)
    {
        if (aAllocator == GetAllocator())
        {
            Swap(aOther);
        }
        else
        {
            const auto otherSize = aOther.Size();
            Construct(otherSize, std::uninitialized_move<Iterator, Iterator>, aOther.begin(), aOther.end(), begin());
        }
    }

    DynArray& operator=(const DynArray& aRhs) noexcept
    {
        if (this != std::addressof(aRhs))
        {
            // https://www.foonathan.net/2015/10/allocatorawarecontainer-propagation-pitfalls/
        }

        return *this;
    }

    DynArray& operator=(DynArray&& aRhs) noexcept
    {
        if (this != std::addressof(aRhs))
        {
            // https://www.foonathan.net/2015/10/allocatorawarecontainer-propagation-pitfalls/
        }

        return *this;
    }

    DynArray& operator=(std::initializer_list<T> aInit) noexcept
    {
        Assign(aInit);
        return *this;
    }

    ~DynArray()
    {
        DestroyAndDeallocate();
    }

    void Assign(SizeType aCount, const T& aValue) noexcept
    {
        if (Capacity() < aCount)
        {
            DynArray tmp(aCount, aValue, GetAllocator());
            Swap(tmp);
        }
        else if (Size() < aCount)
        {
            std::fill(begin(), end(), aValue);

            const SizeType delta = aCount - Size();
            std::uninitialized_fill_n(end(), delta, aValue);

            size = aCount;
        }
        else
        {
            auto it = begin();
            std::fill_n(it, aCount, aValue);

            std::advance(it, aCount);
            Erase(it, end());

            size = aCount;
        }
    }

    ////////////////////////////////////////////////////////////////////////////////////////

    template<typename InputIt>
    requires std::input_iterator<InputIt>
    void Assign(InputIt aFirst, InputIt aLast) noexcept
    {
        // TODO: Implement this.
    }

    ////////////////////////////////////////////////////////////////////////////////////////

    void Assign(std::initializer_list<T> aInit) noexcept
    {
        Assign(aInit.begin(), aInit.end());
    }

    [[nodiscard]] Reference operator[](SizeType aIndex) noexcept
    {
        assert(aIndex < Size());
        return Data()[aIndex];
    }

    [[nodiscard]] ConstReference operator[](SizeType aIndex) const noexcept
    {
        assert(aIndex < Size());
        return Data()[aIndex];
    }

    [[nodiscard]] Reference At(SizeType aIndex) noexcept
    {
        if (aIndex >= Size())
        {
            throw Exception("DynArray::at: out of range");
        }

        return Data()[aIndex];
    }

    [[nodiscard]] ConstReference At(SizeType aIndex) const noexcept
    {
        if (aIndex >= Size())
        {
            throw Exception("DynArray::at: out of range");
        }

        return Data()[aIndex];
    }

    [[nodiscard]] Reference Front() noexcept
    {
        assert(!Empty());
        return Data()[0];
    }

    [[nodiscard]] ConstReference Front() const noexcept
    {
        assert(!Empty());
        return Data()[0];
    }

    [[nodiscard]] Reference Back() noexcept
    {
        assert(!Empty());
        return Data()[Size() - 1];
    }

    [[nodiscard]] ConstReference Back() const noexcept
    {
        assert(!Empty());
        return Data()[Size() - 1];
    }

    [[nodiscard]] T* Data() noexcept
    {
        return entries;
    }

    [[nodiscard]] const T* Data() const noexcept
    {
        return entries;
    }

    [[nodiscard]] bool Empty() const noexcept
    {
        return Size() == 0;
    }

    [[nodiscard]] SizeType Size() const noexcept
    {
        return size;
    }

    [[nodiscard]] constexpr SizeType MaxSize() const noexcept
    {
        constexpr size_t typeSize = sizeof(ValueType);
        constexpr size_t allocatorSize = AlignUp(sizeof(AllocatorType), size_t(4));
        constexpr SizeType maxSize = (std::numeric_limits<SizeType>::max)() / typeSize;

        // Make sure that the maximum size can fit the allocator at the end of the data.
        if constexpr (typeSize < allocatorSize)
        {
            constexpr auto alignedTypeSize = (std::max)(size_t(1), AlignDown(typeSize, size_t(4)));
            return maxSize - (allocatorSize / alignedTypeSize);
        }
        else
        {
            return maxSize - 1;
        }
    }

    [[nodiscard]] SizeType Capacity() const noexcept
    {
        return capacity;
    }

    void Reserve(SizeType aNewCapacity)
    {
        if (MaxSize() < aNewCapacity)
        {
            throw Exception("DynArray::Reserve: too many elements");
        }

        if (Capacity() < aNewCapacity)
        {
            GrowExactly(aNewCapacity);
        }
    }

    void ShrinkToFit()
    {
        if (Capacity() > Size())
        {
            DynArray tmp(std::make_move_iterator(begin()), std::make_move_iterator(end()), GetAllocator());
            Swap(tmp);
        }
    }

    void Clear() noexcept
    {
        std::destroy(begin(), end());
        size = 0;
    }

    Iterator Insert(ConstIterator aPos, const T& aValue)
    {
        Emplace(aPos, aValue);
    }

    Iterator Insert(ConstIterator aPos, T&& aValue)
    {
        Emplace(aPos, std::move(aValue));
    }

    ////////////////////////////////////////////////////////////////////////////////////////
    Iterator Insert(ConstIterator aPos, SizeType aCount, const T& aValue)
    {
        // TODO: Implement this.
        return {};
    }

    template<typename InputIt>
    requires std::input_iterator<InputIt> Iterator Insert(ConstIterator aPos, InputIt aFirst, InputIt aLast)
    {
        // TODO: Implement this.
        return {};
    }

    ////////////////////////////////////////////////////////////////////////////////////////

    Iterator Insert(ConstIterator aPos, std::initializer_list<T> aList)
    {
        return Insert(aPos, aList.begin(), aList.end());
    }

    template<class... Args>
    Iterator Emplace(ConstIterator aPos, Args&&... aArgs)
    {
        // Saving this because we might relocate.
        auto distance = std::distance(cbegin(), aPos);

        if (aPos == cend())
        {
            EmplaceBack(std::forward<Args>(aArgs)...);
        }
        else if (Size() < Capacity())
        {
            ValueType value(std::forward<Args>(aArgs)...);

            auto endIt = end();
            auto penultimateIt = std::prev(endIt);

            auto allocator = GetAllocator();
            AllocatorTraits::construct(allocator, std::addressof(*endIt), std::move(*penultimateIt));

            Iterator whereIt(aPos.Base());

            std::move_backward(whereIt, penultimateIt, endIt);
            AllocatorTraits::destroy(allocator, std::addressof(*whereIt));

            AllocatorTraits::construct(allocator, std::addressof(*whereIt), std::move(value));
            ++size;
        }
        else
        {
            // TODO: Relocate.
        }

        return std::next(begin(), distance);
    }

    Iterator Erase(ConstIterator aPos)
    {
        Iterator whereIt(aPos.Base());
        auto endIt = end();

        std::move(std::next(whereIt), endIt, whereIt);

        auto allocator = GetAllocator();
        auto penultimateIt = std::prev(endIt);

        AllocatorTraits::destroy(allocator, std::addressof(*penultimateIt));
        --size;

        return Iterator(aPos.Base());
    }

    Iterator Erase(ConstIterator aFirst, ConstIterator aLast)
    {
        if (aFirst != aLast)
        {
            Iterator firstIt(aFirst.Base());
            Iterator lastIt(aLast.Base());
            auto endIt = end();

            auto pos = std::move(lastIt, endIt, firstIt);
            std::destroy(pos, endIt);

            size -= static_cast<SizeType>(std::distance(aFirst, aLast));
        }

        return Iterator(aFirst.Base());
    }

    void PushBack(const ValueType& aValue)
    {
        EmplaceBack(aValue);
    }

    void PushBack(ValueType&& aValue)
    {
        EmplaceBack(std::move(aValue));
    }

    template<class... Args>
    Reference EmplaceBack(Args&&... aArgs)
    {
        if (Size() < Capacity())
        {
            auto allocator = GetAllocator();
            auto whereIt = end();

            AllocatorTraits::construct(allocator, std::addressof(*whereIt), std::forward<Args>(aArgs)...);
            ++size;
        }
        else
        {
            // TODO: Relocate.
        }

        return Back();

        // TODO: Can use insert here?
        /*Emplace(end(), std::forward<Args>(aArgs)...);
        return Back();*/

        // if (Size() < Capacity())
        //{
        //     auto& back = Back();

        //    auto allocator = GetAllocator();
        //    AllocatorTraits::construct(allocator, std::addressof(back), std::forward<Args>(aArgs)...);
        //}
        // else
        //{
        //    // TODO: Insert.
        //}

        // return Back();

        // if (Size() >= Capacity())
        //{
        //     Grow(Capacity() + 1);
        //     size++;
        // }

        // auto& back = Back();

        // auto allocator = GetAllocator();
        // AllocatorTraits::construct(allocator, std::addressof(back), std::forward<Args>(aArgs)...);

        // return back;
    }

    void PopBack()
    {
        assert(!Empty());

        auto& last = Back();
        auto allocator = GetAllocator();

        AllocatorTraits::destroy(allocator, std::addressof(last));
        --size;
    }

    void Resize(SizeType aCount)
    {
        ResizeAndAppend(aCount, std::uninitialized_default_construct_n<Iterator, SizeType>);
    }

    void Resize(SizeType aCount, const ValueType& aValue)
    {
        ResizeAndAppend(aCount, std::uninitialized_fill_n<Iterator, SizeType, const ValueType&>, aValue);
    }

    void Swap(DynArray& aOther) noexcept
    {
        if (this != std::addressof(aOther))
        {
            // Note: swapping two containers with unequal allocators if propagate_on_container_swap is false is
            // undefined behavior. (https://en.cppreference.com/w/cpp/named_req/AllocatorAwareContainer)

            std::swap(entries, aOther.entries);
            std::swap(size, aOther.size);
            std::swap(capacity, aOther.capacity);

            // TODO: See https://www.foonathan.net/2015/10/allocatorawarecontainer-propagation-pitfalls/.
        }
    }

#pragma region STL
    Iterator begin() noexcept
    {
        return Iterator(entries);
    }

    ConstIterator begin() const noexcept
    {
        return ConstIterator(entries);
    }

    ConstIterator cbegin() const noexcept
    {
        return ConstIterator(entries);
    }

    Iterator end() noexcept
    {
        return Iterator(entries + size);
    }

    ConstIterator end() const noexcept
    {
        return ConstIterator(entries + size);
    }

    ConstIterator cend() const noexcept
    {
        return ConstIterator(entries + size);
    }

    ReverseIterator rbegin() noexcept
    {
        return ReverseIterator(begin());
    }

    ConstReverseIterator rbegin() const noexcept
    {
        return ConstReverseIterator(begin());
    }

    ConstReverseIterator crbegin() const noexcept
    {
        return ConstReverseIterator(cbegin());
    }

    ReverseIterator rend() noexcept
    {
        return ReverseIterator(end());
    }

    ConstReverseIterator rend() const noexcept
    {
        return ConstReverseIterator(end());
    }

    ConstReverseIterator crend() const noexcept
    {
        return ConstReverseIterator(cend());
    }
#pragma endregion

    [[nodiscard]] AllocatorType GetAllocator() const noexcept
    {
        if (!entries)
        {
            return {};
        }

        return *reinterpret_cast<AllocatorType*>(&entries[capacity]);
    }

    bool operator==(const DynArray& aRhs)
    {
        if (Size() != aRhs.Size())
        {
            return false;
        }

        return std::equal(begin(), end(), aRhs.begin());
    }

    auto operator<=>(const DynArray& aRhs)
    {
        return std::lexicographical_compare_three_way(begin(), end(), aRhs.begin(), aRhs.end());
    }

    T* entries;             // 00
    std::uint32_t capacity; // 08
    std::uint32_t size;     // 0C

private:
    void SetAllocator(const AllocatorType& aAllocator)
    {
        auto location = reinterpret_cast<AllocatorType*>(std::addressof(entries));
        if (entries)
        {
            location = reinterpret_cast<AllocatorType*>(std::addressof(entries[capacity]));
        }

        std::construct_at(location, aAllocator);
    }

    Pointer Allocate(SizeType aObjects)
    {
        if (aObjects > MaxSize())
        {
            throw Exception("DynArray::Allocate: too many elements");
        }

        if (aObjects)
        {
            const auto allocator = GetAllocator();
            const auto sizeWithAllocator = aObjects + 1;

            return allocator.Allocate(sizeWithAllocator, std::alignment_of_v<T>);
        }

        return nullptr;
    }

    void Deallocate(Pointer aMemory)
    {
        if (aMemory)
        {
            const auto allocator = GetAllocator();
            allocator.Deallocate(aMemory);
        }
    }

    template<typename F, typename... Args>
    requires std::invocable<F, Args...>
    void Construct(SizeType aCount, F aFunc, Args&&... aArgs)
    {
        if (aCount)
        {
            Reserve(aCount);
            aFunc(std::forward<Args>(aArgs)...);
            size = aCount;
        }
    }

    void DestroyAndDeallocate()
    {
        if (entries)
        {
            std::destroy(begin(), end());
            Deallocate(entries);

            entries = nullptr;
        }
    }

    void ChangeArray(const Pointer aNewPtr, const SizeType aNewSize, const SizeType aNewCapacity)
    {
        // Make a copy of the allocator.
        const auto allocator = GetAllocator();

        DestroyAndDeallocate();

        entries = aNewPtr;
        size = aNewSize;
        capacity = aNewCapacity;

        // Set the allocator for the new ptr.
        SetAllocator(allocator);
    }

    SizeType CalculateGrowth(SizeType aNewSize)
    {
        const SizeType maxSize = MaxSize();
        const SizeType currentCapacity = Capacity();
        const SizeType maxCapacity = maxSize - currentCapacity / 2;

        if (currentCapacity > maxCapacity)
        {
            // Overflow possible, just use the new size.
            return maxSize;
        }

        const SizeType geometric = currentCapacity + (currentCapacity / 2);
        if (geometric < aNewSize)
        {
            return aNewSize;
        }

        return geometric;
    }

    void Grow(SizeType aNewCapacity)
    {
        auto growth = CalculateGrowth(aNewCapacity);
        GrowExactly(growth);
    }

    void GrowExactly(SizeType aNewCapacity)
    {
        Pointer newData = Allocate(aNewCapacity);

        try
        {
            Detail::UninitializedMoveIfNoexcept(begin(), end(), newData);
        }
        catch (...)
        {
            Deallocate(newData);
            throw;
        }

        ChangeArray(newData, Size(), aNewCapacity);
    }

    template<typename F, typename... Args>
    requires std::invocable<F, Iterator, SizeType, Args...>
    void ResizeAndAppend(SizeType aCount, F aFunc, Args&&... aArgs)
    {
        if (Size() < aCount)
        {
            Iterator beginIt;
            SizeType delta = aCount - Size();

            if (Capacity() < aCount)
            {
                auto oldSize = Size();

                Grow(aCount);
                beginIt = begin() + oldSize;
            }
            else
            {
                beginIt = end();
            }

            aFunc(beginIt, delta, std::forward<Args>(aArgs)...);
            size = aCount;
        }
        else if (Size() > aCount)
        {
            std::destroy(begin() + aCount, end());
            size = aCount;
        }
    }
};
RED4EXT_ASSERT_SIZE(DynArray<void*>, 0x10);
RED4EXT_ASSERT_OFFSET(DynArray<void*>, entries, 0x00);
RED4EXT_ASSERT_OFFSET(DynArray<void*>, capacity, 0x08);
RED4EXT_ASSERT_OFFSET(DynArray<void*>, size, 0x0C);
} // namespace Containers
} // namespace RED4ext
