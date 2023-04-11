#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Tier2WalkType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetTier2Params_NodeType : quest::ISceneManagerNodeType
{
    static constexpr const char* NAME = "questSetTier2Params_NodeType";
    static constexpr const char* ALIAS = NAME;

    Tier2WalkType playerWalkType; // 38
    bool usePlayerWorkspot; // 3C
    bool useEnterAnim; // 3D
    bool useExitAnim; // 3E
    uint8_t unk3F[0x40 - 0x3F]; // 3F
};
RED4EXT_ASSERT_SIZE(SetTier2Params_NodeType, 0x40);
} // namespace quest
using questSetTier2Params_NodeType = quest::SetTier2Params_NodeType;
} // namespace RED4ext

// clang-format on
