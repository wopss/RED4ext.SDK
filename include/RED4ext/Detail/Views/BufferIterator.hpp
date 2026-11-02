#pragma once

#include <concepts>
#include <iterator>

namespace RED4ext::Detail
{
template<typename T>
class BufferIterator
{
public:
    using iterator_concept = std::contiguous_iterator_tag;
    using iterator_category = std::random_access_iterator_tag;
    using value_type = T;
    using reference = value_type&;
    using pointer = value_type*;
    using difference_type = std::ptrdiff_t;

    constexpr BufferIterator() noexcept
        : m_ptr(0)
        , m_step(0)
    {
    }

    constexpr BufferIterator(T* aPtr, size_t aStep) noexcept
        : m_ptr(aPtr)
        , m_step(aStep)
    {
    }

    constexpr BufferIterator(const BufferIterator&) noexcept = default;
    constexpr BufferIterator(BufferIterator&&) noexcept = default;

    constexpr BufferIterator& operator=(const BufferIterator&) noexcept = default;
    constexpr BufferIterator& operator=(BufferIterator&&) noexcept = default;

    constexpr ~BufferIterator() noexcept = default;

    [[nodiscard]] constexpr reference operator*() const noexcept
    {
        return *reinterpret_cast<T*>(m_ptr);
    }

    [[nodiscard]] constexpr pointer operator->() const noexcept
    {
        return m_ptr;
    }

    constexpr BufferIterator& operator++() noexcept
    {
        m_ptr += m_step;
        return *this;
    }

    constexpr BufferIterator operator++(int) noexcept
    {
        auto tmp = *this;
        ++(*this);

        return tmp;
    }

    constexpr BufferIterator& operator--() noexcept
    {
        m_ptr -= m_step;
        return *this;
    }

    constexpr BufferIterator operator--(int) noexcept
    {
        auto tmp = *this;
        --(*this);

        return tmp;
    }

    [[nodiscard]] constexpr reference operator[](const difference_type aOffset) const noexcept
    {
        return *static_cast<T*>(m_ptr + aOffset * m_step);
    }

    constexpr BufferIterator& operator+=(const difference_type aOffset) noexcept
    {
        m_ptr += aOffset * m_step;
        return *this;
    }

    [[nodiscard]] constexpr BufferIterator operator+(const difference_type aOffset) const noexcept
    {
        return BufferIterator(m_ptr + aOffset * m_step);
    }

    constexpr BufferIterator& operator-=(const difference_type aOffset) noexcept
    {
        m_ptr -= aOffset * m_step;
        return *this;
    }

    [[nodiscard]] constexpr BufferIterator operator-(const difference_type aOffset) const noexcept
    {
        return BufferIterator(m_ptr - aOffset * m_step);
    }

    [[nodiscard]] constexpr difference_type operator-(const BufferIterator& aRhs) const noexcept
    {
        return m_ptr - aRhs.m_ptr;
    }

    [[nodiscard]] constexpr bool operator==(const BufferIterator& aRhs) const noexcept
    {
        return m_ptr == aRhs.m_ptr;
    }

    [[nodiscard]] constexpr auto operator<=>(const BufferIterator& aRhs) const noexcept
    {
        return m_ptr <=> aRhs.m_ptr;
    }

    [[nodiscard]] constexpr T* Base() const noexcept
    {
        return m_ptr;
    }

private:
    uintptr_t m_ptr;
    size_t m_step;
};
} // namespace RED4ext::Detail
