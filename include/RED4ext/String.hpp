#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/HashMap.hpp>

#include <cassert>
#include <cstdint>
#include <string>
#include <string_view>

namespace RED4ext
{
namespace Memory
{
struct IAllocator;
}

class StringView;

class String
{
public:
    using ValueType = char;
    using Reference = ValueType&;
    using ConstReference = const ValueType&;
    using Pointer = ValueType*;
    using ConstPointer = const ValueType*;

    using SizeType = std::uint32_t;
    using DifferenceType = std::ptrdiff_t;

    using Iterator = Pointer;
    using ConstIterator = ConstPointer;
    using ReverseIterator = std::reverse_iterator<Iterator>;
    using ConstReverseIterator = std::reverse_iterator<ConstIterator>;

    using TraitsType = std::char_traits<ValueType>;

    String() = default;
    String(SizeType aCapacity);
    String(ConstPointer aStr, SizeType aSize, const Memory::IAllocator* aAllocator = nullptr);
    String(StringView aView, const Memory::IAllocator* aAllocator = nullptr);
    String(ConstPointer aStr, const Memory::IAllocator* aAllocator = nullptr);
    String(const String& aOther);
    String(String&& aOther) noexcept;
    String(const std::string& aStr, const Memory::IAllocator* aAllocator = nullptr);
    ~String();

    operator std::string() const;

    [[nodiscard]] operator std::string_view() const noexcept;

    String& operator=(const String& aOther);
    String& operator=(String&& aOther) noexcept;
    String& operator=(StringView aView);

    String& operator+=(const String& aOther);
    String& operator+=(StringView aStr);

    bool operator==(const String& aOther) const noexcept;
    bool operator==(StringView aView) const noexcept;

    bool operator!=(const String& aOther) const noexcept;
    bool operator!=(StringView aStr) const noexcept;

    Reference operator[](SizeType aIndex) noexcept;
    ConstReference operator[](SizeType aIndex) const noexcept;

    String& Assign(ConstPointer aStr, SizeType aSize);
    String& Assign(StringView aView);
    String& Assign(const String& aOther);

    [[nodiscard]] Reference At(SizeType aIndex);
    [[nodiscard]] ConstReference At(SizeType aIndex) const;

    void Swap(String& aOther) noexcept;

    String& Append(ConstPointer aStr, SizeType aSize);
    String& Append(StringView aView);
    String& Append(ValueType aChar);

    bool Insert(SizeType aIndex, ConstPointer aStr, SizeType aSize);
    bool Insert(SizeType aIndex, StringView aView);
    bool Insert(SizeType aIndex, ValueType aChar);
    bool Insert(SizeType aIndex, const String& aOther);

    bool Resize(SizeType aSize);

    bool Erase(Iterator aPos);
    bool Erase(Iterator aStart, Iterator aEnd);
    bool Erase(SizeType aStartIndex, SizeType aEndIndex);

    void Clear() noexcept;

    bool Reserve(SizeType aCapacity);

    void ShrinkToFit();

    [[nodiscard]] bool Compare(StringView aView) const noexcept;

    [[nodiscard]] uint32_t CalcHash() const noexcept;

    [[nodiscard]] Pointer AsChar() noexcept;
    [[nodiscard]] ConstPointer AsChar() const noexcept;

    [[nodiscard]] const Memory::IAllocator* GetAllocator() const noexcept;

    [[nodiscard]] Reference Front() noexcept;
    [[nodiscard]] ConstReference Front() const noexcept;
    [[nodiscard]] Reference Back() noexcept;
    [[nodiscard]] ConstReference Back() const noexcept;

    [[nodiscard]] Iterator Begin() noexcept;
    [[nodiscard]] ConstIterator Begin() const noexcept;
    [[nodiscard]] Iterator End() noexcept;
    [[nodiscard]] ConstIterator End() const noexcept;
    [[nodiscard]] ReverseIterator RBegin() noexcept;
    [[nodiscard]] ConstReverseIterator RBegin() const noexcept;
    [[nodiscard]] ReverseIterator REnd() noexcept;
    [[nodiscard]] ConstReverseIterator REnd() const noexcept;

    [[nodiscard]] bool IsEmpty() const noexcept;

    [[nodiscard]] Pointer Data() noexcept;
    [[nodiscard]] ConstPointer Data() const noexcept;
    [[nodiscard]] constexpr SizeType MaxSize() const noexcept;
    [[nodiscard]] SizeType Size() const noexcept;
    [[nodiscard]] SizeType Length() const noexcept;
    [[nodiscard]] SizeType Capacity() const noexcept;

    [[nodiscard]] bool IsBackInternal() const noexcept;
    [[nodiscard]] bool IsBackAllocated() const noexcept;
    [[nodiscard]] bool IsBackViewing() const noexcept;
    [[nodiscard]] bool IsBackExternal() const noexcept;
#pragma region STL
    using value_type = ValueType;
    using reference = Reference;
    using const_reference = ConstReference;
    using pointer = Pointer;
    using const_pointer = ConstPointer;

    using size_type = SizeType;
    using difference_type = DifferenceType;

    using iterator = Iterator;
    using const_iterator = ConstIterator;
    using reverse_iterator = ReverseIterator;
    using const_reverse_iterator = ConstReverseIterator;

    using traits_type = TraitsType;

    [[nodiscard]] size_type size() const noexcept
    {
        return Size();
    }

    [[nodiscard]] iterator begin() noexcept
    {
        return Begin();
    }

    [[nodiscard]] const_iterator begin() const noexcept
    {
        return Begin();
    }

    [[nodiscard]] iterator end() noexcept
    {
        return End();
    }

    [[nodiscard]] const_iterator end() const noexcept
    {
        return End();
    }
#pragma endregion
    union Storage
    {
        enum class BackType : uint32_t
        {
            Internal = 0,  // owned, inline
            Allocated = 1, // owned, external
            Viewing = 2    // unowned, external
        };

        struct InternalBack
        {
            static constexpr uint8_t MAX_SIZE = 20;

            [[nodiscard]] Pointer Data() noexcept
            {
                return data;
            }

            [[nodiscard]] ConstPointer Data() const noexcept
            {
                return data;
            }

            [[nodiscard]] constexpr SizeType Capacity() const noexcept
            {
                return MAX_SIZE - 1;
            }

            char data[MAX_SIZE]{};
        };
#pragma pack(push, 4)
        struct ExternalBack
        {
            [[nodiscard]] Pointer Data() noexcept
            {
                return data;
            }

            [[nodiscard]] ConstPointer Data() const noexcept
            {
                return data;
            }

            [[nodiscard]] SizeType Capacity() const noexcept
            {
                return capacity;
            }

            char* data{nullptr};
            int8_t unk[8]{};
            int32_t capacity{0};
        };
#pragma pack(pop)
        InternalBack internal{};
        ExternalBack external;
    };

private:
    Storage m_storage{};      // 00
    uint32_t m_size : 30 {0}; // 14
    Storage::BackType m_backType : 2 {Storage::BackType::Internal};
    const Memory::IAllocator* m_allocator{nullptr}; // 18

    void SetCapacity(SizeType aNewCapacity);

    void TerminateAt(SizeType aPos) noexcept;
};
RED4EXT_ASSERT_SIZE(String, 0x20);

template<typename T>
struct HashMapHash<T, std::enable_if_t<std::is_same_v<T, String>>>
{
    uint32_t operator()(const T& aKey) const noexcept
    {
        return aKey.CalcHash();
    }
};
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/String-inl.hpp>
#endif
