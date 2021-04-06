#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace cp { 
struct PlayerDetector : game::Object
{
    static constexpr const char* NAME = "cpPlayerDetector";
    static constexpr const char* ALIAS = NAME;

    float range; // 228
    uint8_t unk22C[0x230 - 0x22C]; // 22C
};
RED4EXT_ASSERT_SIZE(PlayerDetector, 0x230);
} // namespace cp
} // namespace RED4ext
