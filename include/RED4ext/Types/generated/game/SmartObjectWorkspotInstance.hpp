#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game { 
struct SmartObjectWorkspotInstance
{
    static constexpr const char* NAME = "gameSmartObjectWorkspotInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x78 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(SmartObjectWorkspotInstance, 0x78);
} // namespace game
} // namespace RED4ext
