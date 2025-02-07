#pragma once

#include <concepts>
#include <iterator>

namespace RED4ext::Detail
{
template<typename T, typename Container>
class ArrayIterator
{
public:
    using iterator_concept = std::contiguous_iterator_tag;
    using iterator_category = std::random_access_iterator_tag;
    using value_type = T;
    using reference = value_type&;
    using pointer = value_type*;
    using difference_type = std::ptrdiff_t;

    constexpr ArrayIterator() noexcept
        : m_ptr(nullptr)
    {
    }

    constexpr ArrayIterator(Container::Pointer aPtr) noexcept
        : m_ptr(aPtr)
    {
    }

    // Allow conversion from Iterator to ConstIterator.
    template<typename U>
    requires std::same_as<U, typename Container::ValueType>
    constexpr ArrayIterator(const ArrayIterator<U, Container>& aOther) noexcept
        : m_ptr(aOther.Base())
    {
    }

    constexpr ArrayIterator(const ArrayIterator&) noexcept = default;
    constexpr ArrayIterator(ArrayIterator&&) noexcept = default;

    constexpr ArrayIterator& operator=(const ArrayIterator&) noexcept = default;
    constexpr ArrayIterator& operator=(ArrayIterator&&) noexcept = default;

    constexpr ~ArrayIterator() noexcept = default;

    [[nodiscard]] constexpr reference operator*() const noexcept
    {
        return *m_ptr;
    }

    [[nodiscard]] constexpr pointer operator->() const noexcept
    {
        return m_ptr;
    }

    constexpr ArrayIterator& operator++() noexcept
    {
        ++m_ptr;
        return *this;
    }

    constexpr ArrayIterator operator++(int) noexcept
    {
        auto tmp = *this;
        ++(*this);

        return tmp;
    }

    constexpr ArrayIterator& operator--() noexcept
    {
        --m_ptr;
        return *this;
    }

    constexpr ArrayIterator operator--(int) noexcept
    {
        auto tmp = *this;
        --(*this);

        return tmp;
    }

    [[nodiscard]] constexpr reference operator[](const difference_type aOffset) const noexcept
    {
        return m_ptr[aOffset];
    }

    constexpr ArrayIterator& operator+=(const difference_type aOffset) noexcept
    {
        m_ptr += aOffset;
        return *this;
    }

    [[nodiscard]] constexpr ArrayIterator operator+(const difference_type aOffset) const noexcept
    {
        return ArrayIterator(m_ptr + aOffset);
    }

    constexpr ArrayIterator& operator-=(const difference_type aOffset) noexcept
    {
        m_ptr -= aOffset;
        return *this;
    }

    [[nodiscard]] constexpr ArrayIterator operator-(const difference_type aOffset) const noexcept
    {
        return ArrayIterator(m_ptr - aOffset);
    }

    [[nodiscard]] constexpr difference_type operator-(const ArrayIterator& aRhs) const noexcept
    {
        return m_ptr - aRhs.m_ptr;
    }

    [[nodiscard]] constexpr bool operator==(const ArrayIterator& aRhs) const noexcept
    {
        return m_ptr == aRhs.m_ptr;
    }

    [[nodiscard]] constexpr auto operator<=>(const ArrayIterator& aRhs) const noexcept
    {
        return m_ptr <=> aRhs.m_ptr;
    }

    [[nodiscard]] constexpr Container::Pointer Base() const noexcept
    {
        return m_ptr;
    }

private:
    Container::Pointer m_ptr;
};
} // namespace RED4ext::Detail
