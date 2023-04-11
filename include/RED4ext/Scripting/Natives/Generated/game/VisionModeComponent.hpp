#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>

namespace RED4ext
{
namespace game
{
struct VisionModeComponent : game::Component
{
    static constexpr const char* NAME = "gameVisionModeComponent";
    static constexpr const char* ALIAS = "VisionModeComponent";

    uint8_t unkA8[0xD8 - 0xA8]; // A8
};
RED4EXT_ASSERT_SIZE(VisionModeComponent, 0xD8);
} // namespace game
using gameVisionModeComponent = game::VisionModeComponent;
using VisionModeComponent = game::VisionModeComponent;
} // namespace RED4ext

// clang-format on
