#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IBehaviourManager_NodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct JumpWorkspotAnim_NodeType : quest::IBehaviourManager_NodeType
{
    static constexpr const char* NAME = "questJumpWorkspotAnim_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool allowCurrAnimToFinish; // 70
    uint8_t unk71[0x74 - 0x71]; // 71
    int32_t entryIdToJumpTo; // 74
};
RED4EXT_ASSERT_SIZE(JumpWorkspotAnim_NodeType, 0x78);
} // namespace quest
using questJumpWorkspotAnim_NodeType = quest::JumpWorkspotAnim_NodeType;
} // namespace RED4ext

// clang-format on
