#pragma once

#include <concepts>
#include <iterator>

namespace RED4ext::Detail
{
template<typename T, typename Container>
class DynArrayIterator
{
public:
    using iterator_concept = std::contiguous_iterator_tag;
    using iterator_category = std::random_access_iterator_tag;
    using value_type = T;
    using reference = T&;
    using pointer = T*;
    using difference_type = std::ptrdiff_t;

    constexpr DynArrayIterator() noexcept
        : m_ptr(nullptr)
    {
    }

    constexpr DynArrayIterator(Container::Pointer aPtr) noexcept
        : m_ptr(aPtr)
    {
    }

    // Allow conversion from Iterator to ConstIterator.
    template<typename U>
    requires std::same_as<U, typename Container::ValueType>
    constexpr DynArrayIterator(const DynArrayIterator<U, Container>& aOther) noexcept
        : m_ptr(aOther.Base())
    {
    }

    constexpr DynArrayIterator(const DynArrayIterator&) noexcept = default;
    constexpr DynArrayIterator(DynArrayIterator&&) noexcept = default;

    constexpr DynArrayIterator& operator=(const DynArrayIterator&) noexcept = default;
    constexpr DynArrayIterator& operator=(DynArrayIterator&&) noexcept = default;

    constexpr ~DynArrayIterator() noexcept = default;

    [[nodiscard]] constexpr reference operator*() const noexcept
    {
        return *m_ptr;
    }

    [[nodiscard]] constexpr pointer operator->() const noexcept
    {
        return m_ptr;
    }

    constexpr DynArrayIterator& operator++() noexcept
    {
        ++m_ptr;
        return *this;
    }

    constexpr DynArrayIterator operator++(int) noexcept
    {
        auto tmp = *this;
        ++(*this);

        return tmp;
    }

    constexpr DynArrayIterator& operator--() noexcept
    {
        --m_ptr;
        return *this;
    }

    constexpr DynArrayIterator operator--(int) noexcept
    {
        auto tmp = *this;
        --(*this);

        return tmp;
    }

    [[nodiscard]] constexpr reference operator[](const difference_type aOffset) const noexcept
    {
        return m_ptr[aOffset];
    }

    constexpr DynArrayIterator& operator+=(const difference_type aOffset) noexcept
    {
        m_ptr += aOffset;
        return *this;
    }

    [[nodiscard]] constexpr DynArrayIterator operator+(const difference_type aOffset) const noexcept
    {
        return DynArrayIterator(m_ptr + aOffset);
    }

    constexpr DynArrayIterator& operator-=(const difference_type aOffset) noexcept
    {
        m_ptr -= aOffset;
        return *this;
    }

    [[nodiscard]] constexpr DynArrayIterator operator-(const difference_type aOffset) const noexcept
    {
        return DynArrayIterator(m_ptr - aOffset);
    }

    [[nodiscard]] constexpr difference_type operator-(const DynArrayIterator& aRhs) const noexcept
    {
        return m_ptr - aRhs.m_ptr;
    }

    [[nodiscard]] constexpr bool operator==(const DynArrayIterator& aRhs) const noexcept
    {
        return m_ptr == aRhs.m_ptr;
    }

    [[nodiscard]] constexpr auto operator<=>(const DynArrayIterator& aRhs) const noexcept
    {
        // TODO: _Unfancy
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
