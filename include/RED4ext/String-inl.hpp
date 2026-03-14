#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/String.hpp>
#endif

#include <RED4ext/StringView.hpp>

RED4ext::String::String(SizeType aCapacity)
{
    Reserve(aCapacity);
}

RED4ext::String::String(StringView aView, Memory::IAllocator* aAllocator)
    : m_allocator(aAllocator)
{
    Assign(aView);
}

RED4ext::String::String(ConstPointer aStr, Memory::IAllocator* aAllocator)
    : String(StringView(aStr), aAllocator)
{
}

RED4ext::String::String(const String& aOther)
    : m_allocator(aOther.m_allocator ? aOther.m_allocator : nullptr)
{
    Assign(aOther);
}

RED4ext::String::String(String&& aOther) noexcept
{
    Swap(aOther);
}

RED4ext::String::String(const std::string& aStr, Memory::IAllocator* aAllocator)
    : m_allocator(aAllocator)
{
    Assign(StringView{aStr.c_str(), static_cast<SizeType>(aStr.size())});
}

RED4ext::String::String(std::string_view aView, Memory::IAllocator* aAllocator)
    : m_allocator(aAllocator)
{
    Assign(StringView{aView});
}

RED4ext::String::~String()
{
    if (m_mode != EStringMode::Scratch)
    {
        SetCapacity(0);
        TerminateAt(0);
    }
}

RED4ext::String& RED4ext::String::operator=(const String& aOther)
{
    if (this != std::addressof(aOther))
    {
        Assign(aOther);
    }
    return *this;
}

RED4ext::String& RED4ext::String::operator=(String&& aOther) noexcept
{
    String temp(std::move(aOther));
    Swap(temp);
    return *this;
}

RED4ext::String& RED4ext::String::operator=(StringView aView)
{
    return Assign(aView);
}

RED4ext::String& RED4ext::String::operator+=(const String& aOther)
{
    return Append(aOther);
}

RED4ext::String& RED4ext::String::operator+=(StringView aView)
{
    return Append(aView);
}

bool RED4ext::String::operator==(const String& aOther) const noexcept
{
    return Compare(aOther);
}

bool RED4ext::String::operator==(StringView aView) const noexcept
{
    return Compare(aView);
}

bool RED4ext::String::operator!=(const String& aOther) const noexcept
{
    return !Compare(aOther);
}

bool RED4ext::String::operator!=(StringView aView) const noexcept
{
    return !Compare(aView);
}

RED4ext::String::Reference RED4ext::String::operator[](SizeType aIndex) noexcept
{
    return Data()[aIndex];
}

RED4ext::String::ConstReference RED4ext::String::operator[](SizeType aIndex) const noexcept
{
    return Data()[aIndex];
}

RED4ext::String& RED4ext::String::Assign(StringView aView)
{
    if ((aView.IsEmpty() && m_mode != EStringMode::Inline) || !Resize(aView.Size()))
    {
        return *this;
    }

    if (aView.Data() && !aView.IsEmpty())
    {
        TraitsType::copy(AsChar(), aView.Data(), aView.Size());
    }
    TerminateAt(aView.Size());
    return *this;
}

RED4ext::String& RED4ext::String::Assign(const String& aOther)
{
    if (m_mode == EStringMode::Inline && aOther.m_mode == EStringMode::Inline)
    {
        m_storage = aOther.m_storage;
        m_size = aOther.m_size;
        return *this;
    }
    return Assign(aOther);
}

RED4ext::String::Reference RED4ext::String::At(SizeType aIndex)
{
    if (aIndex >= m_size)
    {
        throw std::out_of_range("String::At: Position out of range");
    }

    return AsChar()[aIndex];
}

RED4ext::String::ConstReference RED4ext::String::At(SizeType aIndex) const
{
    if (aIndex >= m_size)
    {
        throw std::out_of_range("String::At: Position out of range");
    }

    return AsChar()[aIndex];
}

void RED4ext::String::Swap(String& aOther) noexcept
{
    std::swap(m_storage, aOther.m_storage);
    SizeType tempSize = m_size;
    auto tempMode = m_mode;
    m_size = aOther.m_size;
    m_mode = aOther.m_mode;
    aOther.m_size = tempSize;
    aOther.m_mode = tempMode;
    std::swap(m_allocator, aOther.m_allocator);
}

RED4ext::String& RED4ext::String::Append(StringView aView)
{
    if (aView.IsEmpty() || !aView.Data())
    {
        return *this;
    }

    if (!Data())
    {
        Assign(aView);
        return *this;
    }

    SizeType currSize = m_size;
    SizeType newSize = currSize + aView.Size();
    if (Reserve(newSize))
    {
        TraitsType::copy(AsChar() + currSize, aView.Data(), aView.Size());
        m_size = newSize;
        TerminateAt(newSize);
    }
    return *this;
}

RED4ext::String& RED4ext::String::Append(ValueType aChar)
{
    return Append(StringView{&aChar, 1});
}

bool RED4ext::String::Insert(SizeType aIndex, StringView aView)
{
    SizeType currSize = m_size;
    if (aIndex > currSize || aView.IsEmpty() || !aView.Data())
    {
        return false;
    }

    if (!Resize(currSize + aView.Size()))
    {
        return false;
    }

    Pointer ptr = AsChar();
    if (aIndex < currSize)
    {
        TraitsType::copy(ptr + aIndex + aView.Size(), ptr + aIndex, currSize - aIndex);
    }
    TraitsType::copy(ptr + aIndex, aView.Data(), aView.Size());
    return true;
}

bool RED4ext::String::Insert(SizeType aIndex, ValueType aChar)
{
    return Insert(aIndex, StringView{&aChar, 1});
}

bool RED4ext::String::Insert(SizeType aIndex, const String& aOther)
{
    return Insert(aIndex, StringView{aOther});
}

bool RED4ext::String::Resize(SizeType aSize)
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
    {
        return false;
    }

    m_size = aSize;
    TerminateAt(aSize);
    return true;
}

bool RED4ext::String::Erase(Iterator aPos)
{
    if (aPos < Begin() || aPos >= End())
        return false;

    TraitsType::copy(aPos, aPos + 1, End() - aPos);
    m_size -= 1;

    TerminateAt(m_size);
    if (IsEmpty())
    {
        SetCapacity(0);
    }
    return true;
}

bool RED4ext::String::Erase(Iterator aStart, Iterator aEnd)
{
    if (aStart < Begin() || aEnd > End() || aStart >= aEnd)
    {
        return false;
    }

    TraitsType::copy(aStart, aEnd, End() - aEnd + 1);
    m_size -= static_cast<SizeType>(std::distance(aStart, aEnd));

    TerminateAt(m_size);
    if (IsEmpty())
    {
        SetCapacity(0);
    }
    return true;
}

bool RED4ext::String::Erase(SizeType aStartIndex, SizeType aEndIndex)
{
    return Erase(Begin() + aStartIndex, Begin() + aEndIndex);
}

void RED4ext::String::Clear() noexcept
{
    m_size = 0;
    TerminateAt(0);
}

bool RED4ext::String::Reserve(SizeType aCapacity)
{
    if (Capacity() < aCapacity)
    {
        SetCapacity(aCapacity);
    }
    return aCapacity <= Capacity();
}

void RED4ext::String::ShrinkToFit()
{
    if (Capacity() > m_size)
    {
        SetCapacity(m_size);
    }
}

bool RED4ext::String::Compare(StringView aView) const noexcept
{
    if (IsEmpty() && aView.IsEmpty())
    {
        return true;
    }

    if (m_size != aView.Size())
    {
        return false;
    }

    return TraitsType::compare(Data(), aView.Data(), m_size) == 0;
}

RED4ext::String::Pointer RED4ext::String::AsChar() noexcept
{
    return m_mode == EStringMode::Inline ? m_storage.internal.Data() : m_storage.external.Data();
}

RED4ext::String::ConstPointer RED4ext::String::AsChar() const noexcept
{
    return m_mode == EStringMode::Inline ? m_storage.internal.Data() : m_storage.external.Data();
}

const RED4ext::Memory::IAllocator* RED4ext::String::GetAllocator() const noexcept
{
    return m_allocator;
}

RED4ext::String::Reference RED4ext::String::Front() noexcept
{
    assert(!IsEmpty());
    return Data()[0];
}

RED4ext::String::ConstReference RED4ext::String::Front() const noexcept
{
    assert(!IsEmpty());
    return Data()[0];
}

RED4ext::String::Reference RED4ext::String::Back() noexcept
{
    assert(!IsEmpty());
    return Data()[m_size - 1];
}

RED4ext::String::ConstReference RED4ext::String::Back() const noexcept
{
    assert(!IsEmpty());
    return Data()[m_size - 1];
}

RED4ext::String::Iterator RED4ext::String::Begin() noexcept
{
    return Data();
}

RED4ext::String::ConstIterator RED4ext::String::Begin() const noexcept
{
    return Data();
}

RED4ext::String::Iterator RED4ext::String::End() noexcept
{
    return Data() + m_size;
}

RED4ext::String::ConstIterator RED4ext::String::End() const noexcept
{
    return Data() + m_size;
}

RED4ext::String::ReverseIterator RED4ext::String::RBegin() noexcept
{
    return ReverseIterator(Begin());
}

RED4ext::String::ConstReverseIterator RED4ext::String::RBegin() const noexcept
{
    return ConstReverseIterator(Begin());
}

RED4ext::String::ReverseIterator RED4ext::String::REnd() noexcept
{
    return ReverseIterator(End());
}

RED4ext::String::ConstReverseIterator RED4ext::String::REnd() const noexcept
{
    return ConstReverseIterator(End());
}

bool RED4ext::String::IsEmpty() const noexcept
{
    return m_size == 0;
}

RED4ext::String::Pointer RED4ext::String::Data() noexcept
{
    return AsChar();
}

RED4ext::String::ConstPointer RED4ext::String::Data() const noexcept
{
    return AsChar();
}

constexpr RED4ext::String::SizeType RED4ext::String::MaxSize() const noexcept
{
    return (std::numeric_limits<SizeType>::max)() >> 2;
}

RED4ext::String::SizeType RED4ext::String::Size() const noexcept
{
    return m_size;
}

RED4ext::String::SizeType RED4ext::String::Length() const noexcept
{
    return m_size;
}

RED4ext::String::SizeType RED4ext::String::Capacity() const noexcept
{
    return m_mode == EStringMode::Inline ? m_storage.internal.Capacity() : m_storage.external.Capacity();
}

void RED4ext::String::SetCapacity(SizeType aNewCapacity)
{
    using func_t = void (*)(String*, uint32_t);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::String_SetCapacity);
    func(this, aNewCapacity);
}

void RED4ext::String::TerminateAt(SizeType aPos) noexcept
{
    if (char* ptr = AsChar())
    {
        ptr[aPos] = '\0';
    }
}
