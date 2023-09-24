#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/smart/GunUISightParameters.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/smart/GunUITargetParameters.hpp>

namespace RED4ext
{
namespace game::smart
{
struct GunUIParameters : IScriptable
{
    static constexpr const char* NAME = "gamesmartGunUIParameters";
    static constexpr const char* ALIAS = "smartGunUIParameters";

    DynArray<game::smart::GunUITargetParameters> targets; // 40
    game::smart::GunUISightParameters sight; // 50
    Vector2 crosshairPos; // 68
    bool hasRequiredCyberware; // 70
    uint8_t unk71[0x74 - 0x71]; // 71
    float timeToRemoveOccludedTarget; // 74
    float timeToLock; // 78
    float timeToUnlock; // 7C
    DynArray<CName> smartAudioEvents; // 80
    DynArray<float> smartAudioEventsDelays; // 90
};
RED4EXT_ASSERT_SIZE(GunUIParameters, 0xA0);
} // namespace game::smart
using gamesmartGunUIParameters = game::smart::GunUIParameters;
using smartGunUIParameters = game::smart::GunUIParameters;
} // namespace RED4ext

// clang-format on
