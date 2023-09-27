#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ObjectPS.hpp>

namespace RED4ext
{
namespace game
{
struct PuppetPS : game::ObjectPS
{
    static constexpr const char* NAME = "gamePuppetPS";
    static constexpr const char* ALIAS = "GamePuppetPS";

    CName gender; // 68
    bool wasQuickHacked; // 70
    bool hasQuickHackBegunUpload; // 71
    uint8_t unk72[0x74 - 0x72]; // 72
    bool hasAlternativeName; // 74
    bool isCrouch; // 75
    bool allowVehicleCollisionRagdoll; // 76
    uint8_t unk77[0x78 - 0x77]; // 77
};
RED4EXT_ASSERT_SIZE(PuppetPS, 0x78);
} // namespace game
using gamePuppetPS = game::PuppetPS;
using GamePuppetPS = game::PuppetPS;
} // namespace RED4ext

// clang-format on
