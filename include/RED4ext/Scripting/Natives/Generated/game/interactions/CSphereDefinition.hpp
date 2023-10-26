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
struct __declspec(align(0x10)) CSphereDefinition : game::interactions::IShapeDefinition
{
    static constexpr const char* NAME = "gameinteractionsCSphereDefinition";
    static constexpr const char* ALIAS = NAME;

    Vector4 position; // 30
    float radius; // 40
    uint8_t unk44[0x50 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(CSphereDefinition, 0x50);
} // namespace game::interactions
using gameinteractionsCSphereDefinition = game::interactions::CSphereDefinition;
} // namespace RED4ext

// clang-format on
