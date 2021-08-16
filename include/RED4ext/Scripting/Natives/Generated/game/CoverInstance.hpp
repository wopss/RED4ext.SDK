#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SmartObjectWorkspotInstance.hpp>

namespace RED4ext
{
namespace game { 
struct CoverInstance : game::SmartObjectWorkspotInstance
{
    static constexpr const char* NAME = "gameCoverInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0xF8 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(CoverInstance, 0xF8);
} // namespace game
} // namespace RED4ext
