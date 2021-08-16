#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace cp { 
struct PlayerDetector : game::Object
{
    static constexpr const char* NAME = "cpPlayerDetector";
    static constexpr const char* ALIAS = NAME;

    float range; // 230
    uint8_t unk234[0x238 - 0x234]; // 234
};
RED4EXT_ASSERT_SIZE(PlayerDetector, 0x238);
} // namespace cp
} // namespace RED4ext
