#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/IShapeDefinition.hpp>

namespace RED4ext
{
namespace game::interactions { 
struct PieDefinition : game::interactions::IShapeDefinition
{
    static constexpr const char* NAME = "gameinteractionsPieDefinition";
    static constexpr const char* ALIAS = NAME;

    Vector4 center; // 30
    float baseLength; // 40
    float halfExtentZ; // 44
    float radius; // 48
    float angle; // 4C
};
RED4EXT_ASSERT_SIZE(PieDefinition, 0x50);
} // namespace game::interactions
} // namespace RED4ext
