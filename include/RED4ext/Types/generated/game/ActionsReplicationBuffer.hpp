#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game { 
struct ActionsReplicationBuffer
{
    static constexpr const char* NAME = "gameActionsReplicationBuffer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x18 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(ActionsReplicationBuffer, 0x18);
} // namespace game
} // namespace RED4ext
