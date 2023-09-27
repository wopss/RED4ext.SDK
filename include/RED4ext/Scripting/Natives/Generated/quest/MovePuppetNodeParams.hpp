#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AICommandParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/MoveType.hpp>

namespace RED4ext
{
namespace quest { struct AICommandParams; }
namespace quest { struct MoveOnSplineParams; }
namespace quest { struct MoveToParams; }

namespace quest
{
struct MovePuppetNodeParams : quest::AICommandParams
{
    static constexpr const char* NAME = "questMovePuppetNodeParams";
    static constexpr const char* ALIAS = NAME;

    quest::MoveType moveType; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    Handle<quest::MoveOnSplineParams> moveOnSplineParams; // 48
    Handle<quest::MoveToParams> moveToParams; // 58
    uint8_t unk68[0x78 - 0x68]; // 68
    Handle<quest::AICommandParams> otherParams; // 78
    bool repeatCommandOnInterrupt; // 88
    uint8_t unk89[0x90 - 0x89]; // 89
};
RED4EXT_ASSERT_SIZE(MovePuppetNodeParams, 0x90);
} // namespace quest
using questMovePuppetNodeParams = quest::MovePuppetNodeParams;
} // namespace RED4ext

// clang-format on
