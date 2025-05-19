#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class DataNodeType : int32_t
{
    File = 0,
    Group = 1,
    Variable = 2,
    Value = 3,
    SimpleValue = 4,
    ComplexValue = 5,
};
} // namespace game::data
using gamedataDataNodeType = game::data::DataNodeType;
} // namespace RED4ext

// clang-format on
