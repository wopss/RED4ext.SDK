#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace game { struct SceneTierData; }

namespace scn { 
struct PlayerAnimData
{
    static constexpr const char* NAME = "scnPlayerAnimData";
    static constexpr const char* ALIAS = NAME;

    Handle<game::SceneTierData> tierData; // 00
    bool useZSnapping; // 10
    bool unmountBodyCarry; // 11
    uint8_t unk12[0x18 - 0x12]; // 12
};
RED4EXT_ASSERT_SIZE(PlayerAnimData, 0x18);
} // namespace scn
} // namespace RED4ext
