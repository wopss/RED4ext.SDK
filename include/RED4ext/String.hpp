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

enum class EStringMode : uint32_t
{
    Inline = 0,
    Dynamic = 1,
    Scratch = 2
};

union StringStorage
{
    struct Internal
    {
        static constexpr uint8_t BUFFER_SIZE = 20;

        [[nodiscard]] char* Data() noexcept
        {
            return data;
        }

        [[nodiscard]] const char* Data() const noexcept
        {
            return data;
        }

        [[nodiscard]] constexpr uint8_t Capacity() const noexcept
        {
            return BUFFER_SIZE - 1;
        }

        char data[BUFFER_SIZE]{};
    };
#pragma pack(push, 4)
    struct External
    {
        [[nodiscard]] char* Data() noexcept
        {
            return data;
        }

        [[nodiscard]] const char* Data() const noexcept
        {
            return data;
        }

        [[nodiscard]] int32_t Capacity() const noexcept
        {
            return capacity;
        }

        char* data{nullptr};
        int8_t unk[8]{};
        int32_t capacity{0};
    };
#pragma pack(pop)

    Internal internal{};
    External external;
};

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
    String(StringView aView, Memory::IAllocator* aAllocator = nullptr);
    String(ConstPointer aStr, Memory::IAllocator* aAllocator = nullptr);
    String(const String& aOther);
    String(String&& aOther) noexcept;
    String(const std::string& aStr, Memory::IAllocator* aAllocator = nullptr);
    String(const std::string_view aView, Memory::IAllocator* aAllocator = nullptr);

    ~String();

    String& operator=(const String& aOther);
    String& operator=(String&& aOther) noexcept;
    String& operator=(StringView aView);

    String& operator+=(const String& aOther);
    String& operator+=(StringView aView);

    bool operator==(const String& aOther) const noexcept;
    bool operator==(StringView aView) const noexcept;

    bool operator!=(const String& aOther) const noexcept;
    bool operator!=(StringView aView) const noexcept;

    Reference operator[](SizeType aIndex) noexcept;
    ConstReference operator[](SizeType aIndex) const noexcept;

    String& Assign(StringView aView);
    String& Assign(const String& aOther);

    [[nodiscard]] Reference At(SizeType aIndex);
    [[nodiscard]] ConstReference At(SizeType aIndex) const;

    void Swap(String& aOther) noexcept;

    String& Append(StringView aView);
    String& Append(ValueType aChar);

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
#pragma region STL
    [[nodiscard]] Iterator begin() noexcept
    {
        return Begin();
    }

    [[nodiscard]] ConstIterator begin() const noexcept
    {
        return Begin();
    }

    [[nodiscard]] Iterator end() noexcept
    {
        return End();
    }

    [[nodiscard]] ConstIterator end() const noexcept
    {
        return End();
    }
#pragma endregion

private:
    void SetCapacity(SizeType aNewCapacity);

    void TerminateAt(SizeType aPos) noexcept;

    StringStorage m_storage{}; // 00
    uint32_t m_size : 30 {0};  // 14
    EStringMode m_mode : 2 {EStringMode::Inline};
    Memory::IAllocator* m_allocator{nullptr}; // 18
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
