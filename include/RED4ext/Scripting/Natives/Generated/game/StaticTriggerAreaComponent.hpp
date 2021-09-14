#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StaticAreaShapeComponent.hpp>

namespace RED4ext
{
namespace game { 
struct StaticTriggerAreaComponent : game::StaticAreaShapeComponent
{
    static constexpr const char* NAME = "gameStaticTriggerAreaComponent";
    static constexpr const char* ALIAS = "TriggerComponent";

    uint8_t unk150[0x180 - 0x150]; // 150
    uint32_t includeMask; // 180
    uint32_t excludeMask; // 184
    uint8_t unk188[0x1A0 - 0x188]; // 188
};
RED4EXT_ASSERT_SIZE(StaticTriggerAreaComponent, 0x1A0);
} // namespace game
using TriggerComponent = game::StaticTriggerAreaComponent;
} // namespace RED4ext
