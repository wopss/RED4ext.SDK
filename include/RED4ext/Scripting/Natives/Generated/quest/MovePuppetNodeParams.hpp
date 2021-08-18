#pragma once

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

namespace quest { 
struct MovePuppetNodeParams : quest::AICommandParams
{
    static constexpr const char* NAME = "questMovePuppetNodeParams";
    static constexpr const char* ALIAS = NAME;

    quest::MoveType moveType; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    Handle<quest::MoveOnSplineParams> moveOnSplineParams; // 48
    Handle<quest::MoveToParams> moveToParams; // 58
    Handle<quest::AICommandParams> otherParams; // 68
    bool repeatCommandOnInterrupt; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
};
RED4EXT_ASSERT_SIZE(MovePuppetNodeParams, 0x80);
} // namespace quest
} // namespace RED4ext
