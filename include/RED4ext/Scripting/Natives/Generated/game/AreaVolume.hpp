#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/AreaData.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace game { 
struct AreaVolume : game::Object
{
    static constexpr const char* NAME = "gameAreaVolume";
    static constexpr const char* ALIAS = NAME;

    game::AreaData areaData; // 240
    uint8_t unk270[0x280 - 0x270]; // 270
};
RED4EXT_ASSERT_SIZE(AreaVolume, 0x280);
} // namespace game
} // namespace RED4ext
