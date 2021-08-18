#pragma once

#include <RED4ext/CName.hpp>
#include <RED4ext/InstanceType.hpp>
#include <RED4ext/Scripting/Stack.hpp>

namespace RED4ext::Meta
{
template<typename R, typename... T>
std::tuple<T...> GetFunctionArgs(R (*)(T...))
{
    return std::tuple<T...>();
}

template<class Tuple, class F, std::size_t... I>
constexpr F ForEachImpl(Tuple&& t, F&& f, std::index_sequence<I...>)
{
    return (void)std::initializer_list<int>{(std::forward<F>(f)(&std::get<I>(std::forward<Tuple>(t))), 0)...}, f;
}

template<class Tuple, class F>
constexpr F ForEach(F&& f, Tuple&& t)
{
    return ForEachImpl(std::forward<Tuple>(t), std::forward<F>(f),
                       std::make_index_sequence<std::tuple_size<std::remove_reference_t<Tuple>>::value>{});
}
} // namespace RED4ext::Meta
