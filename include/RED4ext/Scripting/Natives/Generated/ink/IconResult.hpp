#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace ink {
enum class IconResult : int32_t
{
    Success = 0,
    UnknownIconTweak = 1,
    AtlasResourceNotFound = 2,
    PartNotFoundInAtlas = 3,
};
} // namespace ink
using inkIconResult = ink::IconResult;
} // namespace RED4ext

// clang-format on
