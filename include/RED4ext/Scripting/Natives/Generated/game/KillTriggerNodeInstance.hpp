#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNodeInstance.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) KillTriggerNodeInstance : world::AreaShapeNodeInstance
{
    static constexpr const char* NAME = "gameKillTriggerNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unkD0[0x100 - 0xD0]; // D0
};
RED4EXT_ASSERT_SIZE(KillTriggerNodeInstance, 0x100);
} // namespace game
using gameKillTriggerNodeInstance = game::KillTriggerNodeInstance;
} // namespace RED4ext

// clang-format on
