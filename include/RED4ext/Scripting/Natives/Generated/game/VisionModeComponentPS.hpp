#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ComponentPS.hpp>

namespace RED4ext
{
namespace game
{
struct VisionModeComponentPS : game::ComponentPS
{
    static constexpr const char* NAME = "gameVisionModeComponentPS";
    static constexpr const char* ALIAS = NAME;

    bool hideInDefaultMode; // 68
    bool hideInFocusMode; // 69
    bool inactive; // 6A
    bool questInactive; // 6B
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(VisionModeComponentPS, 0x70);
} // namespace game
using gameVisionModeComponentPS = game::VisionModeComponentPS;
} // namespace RED4ext

// clang-format on
