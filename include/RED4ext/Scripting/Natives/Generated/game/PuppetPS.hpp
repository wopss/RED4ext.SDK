#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ObjectPS.hpp>

namespace RED4ext
{
namespace game { 
struct PuppetPS : game::ObjectPS
{
    static constexpr const char* NAME = "gamePuppetPS";
    static constexpr const char* ALIAS = "GamePuppetPS";

    CName gender; // 68
    bool wasQuickHacked; // 70
    uint8_t unk71[0x73 - 0x71]; // 71
    bool hasAlternativeName; // 73
    bool isCrouch; // 74
    uint8_t unk75[0x78 - 0x75]; // 75
};
RED4EXT_ASSERT_SIZE(PuppetPS, 0x78);
} // namespace game
using GamePuppetPS = game::PuppetPS;
} // namespace RED4ext
