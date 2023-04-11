#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PuppetVehicleState.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace scn
{
struct GameplayTransitionEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scnGameplayTransitionEvent";
    static constexpr const char* ALIAS = NAME;

    scn::PerformerId performer; // 58
    scn::PuppetVehicleState vehState; // 5C
    uint8_t unk5D[0x60 - 0x5D]; // 5D
};
RED4EXT_ASSERT_SIZE(GameplayTransitionEvent, 0x60);
} // namespace scn
using scnGameplayTransitionEvent = scn::GameplayTransitionEvent;
} // namespace RED4ext

// clang-format on
