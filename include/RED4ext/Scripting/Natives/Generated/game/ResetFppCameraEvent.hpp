#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { 
struct ResetFppCameraEvent : red::Event
{
    static constexpr const char* NAME = "gameResetFppCameraEvent";
    static constexpr const char* ALIAS = "ResetFppCameraEvent";

    float pitch; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(ResetFppCameraEvent, 0x48);
} // namespace game
using ResetFppCameraEvent = game::ResetFppCameraEvent;
} // namespace RED4ext
