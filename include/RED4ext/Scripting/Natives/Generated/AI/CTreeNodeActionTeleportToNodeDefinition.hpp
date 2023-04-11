#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeActionDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeDefNodeRef.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeDefVector.hpp>

namespace RED4ext
{
namespace AI
{
struct CTreeNodeActionTeleportToNodeDefinition : AI::CTreeNodeActionDefinition
{
    static constexpr const char* NAME = "AICTreeNodeActionTeleportToNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    LibTreeDefNodeRef nodeRef; // 48
    LibTreeDefVector offset; // 60
    bool doNavTest; // 80
    uint8_t unk81[0x88 - 0x81]; // 81
};
RED4EXT_ASSERT_SIZE(CTreeNodeActionTeleportToNodeDefinition, 0x88);
} // namespace AI
using AICTreeNodeActionTeleportToNodeDefinition = AI::CTreeNodeActionTeleportToNodeDefinition;
} // namespace RED4ext

// clang-format on
