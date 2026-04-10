#pragma once

#include <type_traits>

#include <RED4ext/Detail/Function.hpp>

namespace RED4ext
{
class JobGroup;

namespace Detail
{
template<typename T>
concept IsJobHandlerWithNoParams = IsClosure<T, void>;

template<typename T>
concept IsJobHandlerWithGroupParam = IsClosure<T, void, const JobGroup&>;

template<typename T>
concept IsJobHandlerWithIndexParam = IsClosure<T, void, uint32_t>;

template<typename T>
concept IsJobHandlerWithIndexAndGroupParams = IsClosure<T, void, uint32_t, const JobGroup&>;

template<typename T>
concept IsJobHandlerWithRangeParams = IsClosure<T, void, uint32_t, uint32_t>;

template<typename T>
concept IsJobHandlerWithRangeAndGroupParams = IsClosure<T, void, uint32_t, uint32_t, const JobGroup&>;

template<typename T>
concept IsAnyRegualrJobHandler = IsJobHandlerWithGroupParam<T> || IsJobHandlerWithNoParams<T>;

template<typename T>
concept IsAnyParallelJobHandler = IsJobHandlerWithRangeAndGroupParams<T> || IsJobHandlerWithRangeParams<T> ||
                                  IsJobHandlerWithGroupParam<T> || IsJobHandlerWithNoParams<T>;

template<typename T>
concept IsAnyParallelJobFinisher = IsJobHandlerWithIndexAndGroupParams<T> || IsJobHandlerWithIndexParam<T> ||
                                   IsJobHandlerWithGroupParam<T> || IsJobHandlerWithNoParams<T>;
} // namespace Detail
} // namespace RED4ext
