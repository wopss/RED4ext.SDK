#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeActionDefinition.hpp>

namespace RED4ext
{
namespace AI
{
struct CTreeNodeActionTeleportToPositionDefinition : AI::CTreeNodeActionDefinition
{
    static constexpr const char* NAME = "AICTreeNodeActionTeleportToPositionDefinition";
    static constexpr const char* ALIAS = NAME;

    CName positionName; // 48
    bool doNavTest; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
};
RED4EXT_ASSERT_SIZE(CTreeNodeActionTeleportToPositionDefinition, 0x58);
} // namespace AI
using AICTreeNodeActionTeleportToPositionDefinition = AI::CTreeNodeActionTeleportToPositionDefinition;
} // namespace RED4ext

// clang-format on
