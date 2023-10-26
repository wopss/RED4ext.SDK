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
struct __declspec(align(0x10)) ConeDefinition : game::interactions::IShapeDefinition
{
    static constexpr const char* NAME = "gameinteractionsConeDefinition";
    static constexpr const char* ALIAS = NAME;

    Vector4 pos1; // 30
    Vector4 pos2; // 40
    float radius1; // 50
    float radius2; // 54
    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(ConeDefinition, 0x60);
} // namespace game::interactions
using gameinteractionsConeDefinition = game::interactions::ConeDefinition;
} // namespace RED4ext

// clang-format on
