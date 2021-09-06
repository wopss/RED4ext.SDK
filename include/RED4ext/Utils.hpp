#pragma once

#include <type_traits>

namespace RED4ext
{
template<typename T, typename = typename std::enable_if<std::is_integral<T>::value, T>::type>
constexpr T AlignDown(T number, T alignment)
{
    return number & ~(alignment - 1);
}

template<typename T, typename = typename std::enable_if<std::is_integral<T>::value, T>::type>
constexpr T AlignUp(T number, T alignment)
{
    return AlignDown(number + (alignment - 1), alignment);
}
} // namespace RED4ext
