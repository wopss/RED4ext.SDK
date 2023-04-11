#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct SetCameraParamsWithOverridesEvent : red::Event
{
    static constexpr const char* NAME = "gameSetCameraParamsWithOverridesEvent";
    static constexpr const char* ALIAS = "SetCameraParamsWithOverridesEvent";

    CName paramsName; // 40
    float yawMaxLeft; // 48
    float yawMaxRight; // 4C
    float pitchMax; // 50
    float pitchMin; // 54
    float sensitivityMultX; // 58
    float sensitivityMultY; // 5C
};
RED4EXT_ASSERT_SIZE(SetCameraParamsWithOverridesEvent, 0x60);
} // namespace game
using gameSetCameraParamsWithOverridesEvent = game::SetCameraParamsWithOverridesEvent;
using SetCameraParamsWithOverridesEvent = game::SetCameraParamsWithOverridesEvent;
} // namespace RED4ext

// clang-format on
