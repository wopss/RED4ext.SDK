#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectPreAction.hpp>

namespace RED4ext
{
namespace world { struct Effect; }

namespace game { 
struct EffectPreAction_VisualEffectAtPosition : game::EffectPreAction
{
    static constexpr const char* NAME = "gameEffectPreAction_VisualEffectAtPosition";
    static constexpr const char* ALIAS = NAME;

    RaRef<world::Effect> effect; // 40
    bool attached; // 48
    bool breakLoopOnDetach; // 49
    uint8_t unk4A[0x50 - 0x4A]; // 4A
    CName effectTag; // 50
};
RED4EXT_ASSERT_SIZE(EffectPreAction_VisualEffectAtPosition, 0x58);
} // namespace game
} // namespace RED4ext
