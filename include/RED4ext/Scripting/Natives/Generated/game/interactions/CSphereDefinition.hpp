#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/IShapeDefinition.hpp>

namespace RED4ext
{
namespace game::interactions { 
struct CSphereDefinition : game::interactions::IShapeDefinition
{
    static constexpr const char* NAME = "gameinteractionsCSphereDefinition";
    static constexpr const char* ALIAS = NAME;

    Vector4 position; // 30
    float radius; // 40
    uint8_t unk44[0x50 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(CSphereDefinition, 0x50);
} // namespace game::interactions
} // namespace RED4ext
