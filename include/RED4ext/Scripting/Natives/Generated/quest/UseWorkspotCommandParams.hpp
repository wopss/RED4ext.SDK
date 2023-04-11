#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AICommandParams.hpp>

namespace RED4ext
{
namespace quest
{
struct UseWorkspotCommandParams : quest::AICommandParams
{
    static constexpr const char* NAME = "questUseWorkspotCommandParams";
    static constexpr const char* ALIAS = NAME;

    NodeRef workspotNode; // 40
    bool moveToWorkspot; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
    CName forceEntryAnimName; // 50
};
RED4EXT_ASSERT_SIZE(UseWorkspotCommandParams, 0x58);
} // namespace quest
using questUseWorkspotCommandParams = quest::UseWorkspotCommandParams;
} // namespace RED4ext

// clang-format on
