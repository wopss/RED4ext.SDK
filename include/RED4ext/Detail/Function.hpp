#pragma once

#include <concepts>
#include <type_traits>

namespace RED4ext::Detail
{
template<typename R, typename... Args>
using UnboundFunctionPtr = R (*)(Args...);

template<typename C, typename R, typename... Args>
using MemberFunctionPtr = R (C::*)(Args...);

// clang-format off
template<typename T, typename R, typename... Args>
concept IsClosure = std::is_class_v<T> && requires(T& t, Args&&... args)
{
    { t(std::forward<Args>(args)...) } -> std::convertible_to<R>;
};
// clang-format on
} // namespace RED4ext::Detail
