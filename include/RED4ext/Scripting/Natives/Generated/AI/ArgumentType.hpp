#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace AI {
enum class ArgumentType : int32_t
{
    Bool = 0,
    Int = 1,
    Uint64 = 2,
    Enum = 3,
    Float = 4,
    CName = 5,
    Vector = 6,
    Object = 7,
    TreeRef = 8,
    NodeRef = 9,
    GlobalNodeId = 10,
    PuppetRef = 11,
    Serializable = 12,
    TweakDBID = 13,
};
} // namespace AI
using AIArgumentType = AI::ArgumentType;
} // namespace RED4ext

// clang-format on
