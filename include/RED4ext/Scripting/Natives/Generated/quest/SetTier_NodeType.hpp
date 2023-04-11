#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/GameplayTier.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MotionConstrainedTierDataParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetTier_NodeType : quest::ISceneManagerNodeType
{
    static constexpr const char* NAME = "questSetTier_NodeType";
    static constexpr const char* ALIAS = NAME;

    GameplayTier tier; // 38
    bool usePlayerWorkspot; // 3C
    bool useEnterAnim; // 3D
    bool useExitAnim; // 3E
    bool forceEmptyHands; // 3F
    game::MotionConstrainedTierDataParams motionConstrainedTierDataParams; // 40
};
RED4EXT_ASSERT_SIZE(SetTier_NodeType, 0x60);
} // namespace quest
using questSetTier_NodeType = quest::SetTier_NodeType;
} // namespace RED4ext

// clang-format on
