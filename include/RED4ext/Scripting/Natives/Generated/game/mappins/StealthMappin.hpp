#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/RuntimeMappin.hpp>

namespace RED4ext
{
namespace game::mappins { 
struct StealthMappin : game::mappins::RuntimeMappin
{
    static constexpr const char* NAME = "gamemappinsStealthMappin";
    static constexpr const char* ALIAS = "StealthMappin";

    uint8_t unk108[0x360 - 0x108]; // 108
};
RED4EXT_ASSERT_SIZE(StealthMappin, 0x360);
} // namespace game::mappins
using StealthMappin = game::mappins::StealthMappin;
} // namespace RED4ext
