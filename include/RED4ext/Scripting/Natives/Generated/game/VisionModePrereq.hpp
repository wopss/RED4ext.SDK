#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IPrereq.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/VisionModeType.hpp>

namespace RED4ext
{
namespace game
{
struct VisionModePrereq : game::IPrereq
{
    static constexpr const char* NAME = "gameVisionModePrereq";
    static constexpr const char* ALIAS = NAME;

    game::VisionModeType type; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(VisionModePrereq, 0x48);
} // namespace game
using gameVisionModePrereq = game::VisionModePrereq;
} // namespace RED4ext

// clang-format on
