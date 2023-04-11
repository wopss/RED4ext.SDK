#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct ExtendedWorkspotInfo : IScriptable
{
    static constexpr const char* NAME = "gameExtendedWorkspotInfo";
    static constexpr const char* ALIAS = "ExtendedWorkspotInfo";

    bool isActive; // 40
    bool entering; // 41
    bool exiting; // 42
    bool inReaction; // 43
    bool inMotion; // 44
    bool playingSyncAnim; // 45
    uint8_t unk46[0x48 - 0x46]; // 46
};
RED4EXT_ASSERT_SIZE(ExtendedWorkspotInfo, 0x48);
} // namespace game
using gameExtendedWorkspotInfo = game::ExtendedWorkspotInfo;
using ExtendedWorkspotInfo = game::ExtendedWorkspotInfo;
} // namespace RED4ext

// clang-format on
