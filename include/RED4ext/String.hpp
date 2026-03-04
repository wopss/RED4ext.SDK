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

    String() = default;

    String(SizeType aCapacity)
    {
        Reserve(aCapacity);
    }

    String(ConstPointer aStr, SizeType aSize)
    {
        Assign(aStr, aSize);
    }

    String(ConstPointer aStr)
    {
        Assign(aStr);
    }

    String(ConstPointer aStr, SizeType aSize, const Memory::IAllocator& aAllocator)
        : m_allocator(&aAllocator)
    {
        Assign(aStr, aSize);
    }

    String(ConstPointer aStr, const Memory::IAllocator& aAllocator)
        : m_allocator(&aAllocator)
    {
        Assign(aStr);
    }

    String(const String& aOther)
        : m_allocator(aOther.m_allocator ? aOther.m_allocator : nullptr)
    {
        Assign(aOther);
    }

    String(String&& aOther) noexcept
    {
        Swap(aOther);
    }

    String(const std::string& aStr, Memory::IAllocator* aAllocator = nullptr)
        : m_allocator(aAllocator)
    {
        Assign(aStr.c_str(), static_cast<SizeType>(aStr.size()));
    }

    String(const std::string_view& aView, Memory::IAllocator* aAllocator = nullptr)
        : m_allocator(aAllocator)
    {
        Assign(aView.data(), static_cast<SizeType>(aView.size()));
    }

    ~String()
    {
        if (!IsBackViewing())
        {
            SetCapacity(0);
            TerminateAt(0);
        }
    }

    operator std::string() const
    {
        return std::string(AsChar(), m_size);
    }

    [[nodiscard]] operator std::string_view() const noexcept
    {
        return std::string_view(AsChar(), m_size);
    }

    String& operator=(const String& aOther)
    {
        if (this != std::addressof(aOther))
        {
            Assign(aOther);
        }
        return *this;
    }

    String& operator=(String&& aOther) noexcept
    {
        String temp(std::move(aOther));
        Swap(temp);
        return *this;
    }

    String& operator=(ConstPointer aStr)
    {
        return Assign(aStr);
    }

    String& operator+=(const String& aOther)
    {
        return Append(aOther.AsChar(), aOther.m_size);
    }

    String& operator+=(ConstPointer aStr)
    {
        return Append(aStr, static_cast<SizeType>(strlen(aStr)));
    }

    bool operator==(const String& aOther) const noexcept
    {
        return Compare(aOther);
    }

    bool operator==(ConstPointer aStr) const noexcept
    {
        return Compare(aStr);
    }

    bool operator!=(const String& aOther) const noexcept
    {
        return !Compare(aOther);
    }

    bool operator!=(ConstPointer aStr) const noexcept
    {
        return !Compare(aStr);
    }

    Reference operator[](SizeType aIndex) noexcept
    {
        assert(aIndex < m_size);
        return AsChar()[aIndex];
    }

    ConstReference operator[](SizeType aIndex) const noexcept
    {
        assert(aIndex < m_size);
        return AsChar()[aIndex];
    }
    // canonically `Set`
    String& Assign(ConstPointer aStr, SizeType aSize)
    {
        if (!Resize(aSize) || (aSize == 0 && IsBackExternal()))
            return *this;

        if (aStr && aSize > 0)
        {
            memcpy(AsChar(), aStr, aSize);
        }
        TerminateAt(aSize);
        return *this;
    }
    // canonically `Set`
    String& Assign(ConstPointer aStr)
    {
        return Assign(aStr, aStr ? static_cast<SizeType>(strlen(aStr)) : 0);
    }
    // canonically `Set`
    String& Assign(const String& aOther)
    {
        if (IsBackInternal() && aOther.IsBackInternal())
        {
            m_storage = aOther.m_storage;
            m_size = aOther.m_size;
            return *this;
        }
        return Assign(aOther.AsChar(), aOther.m_size);
    }

    [[nodiscard]] Reference At(SizeType aIndex)
    {
        if (aIndex >= m_size)
            throw std::out_of_range("String::At: Position out of range");

        return AsChar()[aIndex];
    }

    [[nodiscard]] ConstReference At(SizeType aIndex) const
    {
        if (aIndex >= m_size)
            throw std::out_of_range("String::At: Position out of range");

        return AsChar()[aIndex];
    }

    void Swap(String& aOther) noexcept
    {
        std::swap(m_storage, aOther.m_storage);
        SizeType tempSize = m_size;
        auto tempBackType = m_backType;
        m_size = aOther.m_size;
        m_backType = aOther.m_backType;
        aOther.m_size = tempSize;
        aOther.m_backType = tempBackType;
        std::swap(m_allocator, aOther.m_allocator);
    }

    String& Append(ConstPointer aStr, SizeType aSize)
    {
        if (aSize == 0 || !aStr)
            return *this;

        if (!Data())
        {
            Assign(aStr, aSize);
            return *this;
        }

        SizeType currSize = m_size;
        SizeType newSize = currSize + aSize;
        if (Reserve(newSize))
        {
            memcpy(AsChar() + currSize, aStr, aSize);
            m_size = newSize;
            TerminateAt(newSize);
        }
        return *this;
    }

    String& Append(ValueType aChar)
    {
        return Append(&aChar, 1);
    }

    bool Insert(SizeType aIndex, ConstPointer aStr, SizeType aSize)
    {
        SizeType currSize = m_size;
        if (aIndex > currSize || !aStr || aSize == 0)
            return false;

        if (!Resize(currSize + aSize))
            return false;

        Pointer ptr = AsChar();
        if (aIndex < currSize)
        {
            memcpy(ptr + aIndex + aSize, ptr + aIndex, currSize - aIndex);
        }
        memcpy(ptr + aIndex, aStr, aSize);
        return true;
    }

    bool Insert(SizeType aIndex, ValueType aChar)
    {
        return Insert(aIndex, &aChar, 1);
    }

    bool Insert(SizeType aIndex, const String& aOther)
    {
        return Insert(aIndex, aOther.AsChar(), aOther.m_size);
    }

    bool Resize(SizeType aSize)
    {
        if (!aSize)
        {
            SetCapacity(0);
            Clear();
            return true;
        }

        if (Capacity() < aSize)
        {
            SetCapacity(aSize);
        }

        if (Capacity() < aSize)
            return false;

        m_size = aSize;
        TerminateAt(aSize);
        return true;
    }

    bool Erase(Iterator aStart, Iterator aEnd)
    {
        if (aStart < Begin() || aEnd > End() || aStart >= aEnd)
            return false;

        memcpy(aStart, aEnd, End() - aEnd + 1);
        m_size -= static_cast<SizeType>(std::distance(aStart, aEnd));

        TerminateAt(m_size);
        if (IsEmpty())
        {
            SetCapacity(0);
        }
        return true;
    }

    bool Erase(SizeType aStartIndex, SizeType aEndIndex)
    {
        return Erase(Begin() + aStartIndex, Begin() + aEndIndex);
    }

    bool Erase(Iterator aPos)
    {
        if (aPos < Begin() || aPos >= End())
            return false;

        memcpy(aPos, aPos + 1, End() - aPos);
        m_size -= 1;

        TerminateAt(m_size);
        if (IsEmpty())
        {
            SetCapacity(0);
        }
        return true;
    }

    void Clear() noexcept
    {
        m_size = 0;
        TerminateAt(0);
    }

    bool Reserve(SizeType aCapacity)
    {
        if (Capacity() < aCapacity)
        {
            SetCapacity(aCapacity);
        }
        return aCapacity <= Capacity();
    }

    void ShrinkToFit()
    {
        if (Capacity() > m_size)
            SetCapacity(m_size);
    }

    [[nodiscard]] bool Compare(const String& aOther) const noexcept
    {
        if (!Data() && !aOther.Data())
            return true;

        if (m_size != aOther.m_size)
            return false;

        return strncmp(AsChar(), aOther.AsChar(), m_size) == 0;
    }

    [[nodiscard]] bool Compare(ConstPointer aStr) const noexcept
    {
        if ((!Data() || IsEmpty()) && !aStr)
            return true;

        if (m_size != strlen(aStr)) // will crash if aStr is null, CDPR code has same issue
            return false;

        return strncmp(AsChar(), aStr, m_size) == 0;
    }

    [[nodiscard]] uint32_t CalcHash() const noexcept
    {
        ConstPointer ptr = AsChar();
        uint32_t hash = 0;
        for (SizeType i = 0; i < m_size; ++i)
        {
            hash = hash * 31u + ptr[i];
        }
        return hash;
    }

    [[nodiscard]] Pointer AsChar() noexcept
    {
        return IsBackInternal() ? m_storage.internal.Data() : m_storage.external.Data();
    }

    [[nodiscard]] ConstPointer AsChar() const noexcept
    {
        return IsBackInternal() ? m_storage.internal.Data() : m_storage.external.Data();
    }

    [[nodiscard]] const Memory::IAllocator* GetAllocator() const noexcept
    {
        return m_allocator;
    }

    [[nodiscard]] Reference Front() noexcept
    {
        assert(!IsEmpty());
        return AsChar()[0];
    }

    [[nodiscard]] ConstReference Front() const noexcept
    {
        assert(!IsEmpty());
        return AsChar()[0];
    }

    [[nodiscard]] Reference Back() noexcept
    {
        assert(!IsEmpty());
        return AsChar()[m_size - 1];
    }

    [[nodiscard]] ConstReference Back() const noexcept
    {
        assert(!IsEmpty());
        return AsChar()[m_size - 1];
    }

    [[nodiscard]] Iterator Begin() noexcept
    {
        return AsChar();
    }

    [[nodiscard]] ConstIterator Begin() const noexcept
    {
        return AsChar();
    }

    [[nodiscard]] Iterator End() noexcept
    {
        return AsChar() + m_size;
    }

    [[nodiscard]] ConstIterator End() const noexcept
    {
        return AsChar() + m_size;
    }

    [[nodiscard]] ReverseIterator RBegin() noexcept
    {
        return ReverseIterator(Begin());
    }

    [[nodiscard]] ConstReverseIterator RBegin() const noexcept
    {
        return ConstReverseIterator(Begin());
    }

    [[nodiscard]] ReverseIterator REnd() noexcept
    {
        return ReverseIterator(End());
    }

    [[nodiscard]] ConstReverseIterator REnd() const noexcept
    {
        return ConstReverseIterator(End());
    }
    // canonically `Empty`
    [[nodiscard]] bool IsEmpty() const noexcept
    {
        return m_size == 0;
    }

    [[nodiscard]] Pointer Data() noexcept
    {
        return AsChar();
    }

    [[nodiscard]] ConstPointer Data() const noexcept
    {
        return AsChar();
    }

    [[nodiscard]] constexpr SizeType MaxSize() const noexcept
    {
        return (std::numeric_limits<SizeType>::max)() >> 2;
    }

    [[nodiscard]] SizeType Size() const noexcept
    {
        return m_size;
    }

    [[nodiscard]] SizeType Length() const noexcept
    {
        return m_size;
    }

    [[nodiscard]] SizeType Capacity() const noexcept
    {
        return IsBackInternal() ? m_storage.internal.Capacity() : m_storage.external.Capacity();
    }

    [[nodiscard]] bool IsBackInternal() const noexcept
    {
        return m_backType == Storage::BackType::Internal;
    }

    [[nodiscard]] bool IsBackAllocated() const noexcept
    {
        return m_backType == Storage::BackType::Allocated;
    }

    [[nodiscard]] bool IsBackViewing() const noexcept
    {
        return m_backType == Storage::BackType::Viewing;
    }

    [[nodiscard]] bool IsBackExternal() const noexcept
    {
        return IsBackViewing() || IsBackAllocated();
    }
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
    Storage m_storage{};     // 00
    uint32_t m_size : 30{0}; // 14
    Storage::BackType m_backType : 2 {Storage::BackType::Internal};          
    const Memory::IAllocator* m_allocator{nullptr}; // 18

    void SetCapacity(SizeType aNewCapacity) // name in keeping consistency with DynArray
    {
        using func_t = void (*)(String*, uint32_t);
        static UniversalRelocFunc<func_t> func(Detail::AddressHashes::String_SetCapacity);
        func(this, aNewCapacity);
    }

    void TerminateAt(SizeType aPos) noexcept
    {
        if (char* ptr = AsChar())
        {
            ptr[aPos] = '\0';
        }
    }
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
