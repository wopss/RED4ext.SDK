#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PlayerControlledComponent.hpp>

namespace RED4ext
{
namespace game::state { 
struct MachineComponent : game::PlayerControlledComponent
{
    static constexpr const char* NAME = "gamestateMachineComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk98[0x1ACD0 - 0x98]; // 98
    CString packageName; // 1ACD0
    uint8_t unk1ACF0[0x1AD20 - 0x1ACF0]; // 1ACF0
};
RED4EXT_ASSERT_SIZE(MachineComponent, 0x1AD20);
} // namespace game::state
} // namespace RED4ext
