#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IGameplayActionData.hpp>

namespace RED4ext
{
namespace scn
{
struct GameplayActionSetVehicleSuspensionData : scn::IGameplayActionData
{
    static constexpr const char* NAME = "scnGameplayActionSetVehicleSuspensionData";
    static constexpr const char* ALIAS = NAME;

    bool active; // 30
    uint8_t unk31[0x34 - 0x31]; // 31
    float cooldownTime; // 34
};
RED4EXT_ASSERT_SIZE(GameplayActionSetVehicleSuspensionData, 0x38);
} // namespace scn
using scnGameplayActionSetVehicleSuspensionData = scn::GameplayActionSetVehicleSuspensionData;
} // namespace RED4ext

// clang-format on
