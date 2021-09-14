#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineeventBaseEvent.hpp>

namespace RED4ext
{
namespace game::state { 
struct MachineeventImpulse : game::state::MachineeventBaseEvent
{
    static constexpr const char* NAME = "gamestateMachineeventImpulse";
    static constexpr const char* ALIAS = "PSMImpulse";

    uint8_t unk48[0x50 - 0x48]; // 48
    Vector4 impulse; // 50
};
RED4EXT_ASSERT_SIZE(MachineeventImpulse, 0x60);
} // namespace game::state
using PSMImpulse = game::state::MachineeventImpulse;
} // namespace RED4ext
