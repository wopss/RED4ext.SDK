#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace game
{
struct DebugFreeCamera : game::Object
{
    static constexpr const char* NAME = "gameDebugFreeCamera";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk240[0x2A0 - 0x240]; // 240
};
RED4EXT_ASSERT_SIZE(DebugFreeCamera, 0x2A0);
} // namespace game
using gameDebugFreeCamera = game::DebugFreeCamera;
} // namespace RED4ext

// clang-format on
