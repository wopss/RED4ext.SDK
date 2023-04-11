#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IRewardManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct GiveReward_NodeType : quest::IRewardManagerNodeType
{
    static constexpr const char* NAME = "questGiveReward_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<TweakDBID> rewards; // 30
};
RED4EXT_ASSERT_SIZE(GiveReward_NodeType, 0x40);
} // namespace quest
using questGiveReward_NodeType = quest::GiveReward_NodeType;
} // namespace RED4ext

// clang-format on
