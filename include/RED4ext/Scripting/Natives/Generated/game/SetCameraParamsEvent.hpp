#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { 
struct SetCameraParamsEvent : red::Event
{
    static constexpr const char* NAME = "gameSetCameraParamsEvent";
    static constexpr const char* ALIAS = "SetCameraParamsEvent";

    CName paramsName; // 40
};
RED4EXT_ASSERT_SIZE(SetCameraParamsEvent, 0x48);
} // namespace game
using SetCameraParamsEvent = game::SetCameraParamsEvent;
} // namespace RED4ext
