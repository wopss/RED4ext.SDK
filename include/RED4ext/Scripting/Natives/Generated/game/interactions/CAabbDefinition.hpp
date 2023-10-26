#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/IShapeDefinition.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct __declspec(align(0x10)) CAabbDefinition : game::interactions::IShapeDefinition
{
    static constexpr const char* NAME = "gameinteractionsCAabbDefinition";
    static constexpr const char* ALIAS = NAME;

    Vector4 min; // 30
    Vector4 max; // 40
};
RED4EXT_ASSERT_SIZE(CAabbDefinition, 0x50);
} // namespace game::interactions
using gameinteractionsCAabbDefinition = game::interactions::CAabbDefinition;
} // namespace RED4ext

// clang-format on
