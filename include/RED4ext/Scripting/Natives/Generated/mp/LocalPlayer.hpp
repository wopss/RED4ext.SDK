#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/mp/Player.hpp>

namespace RED4ext
{
namespace mp { 
struct LocalPlayer : mp::Player
{
    static constexpr const char* NAME = "mpLocalPlayer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk60[0xA0 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(LocalPlayer, 0xA0);
} // namespace mp
} // namespace RED4ext
