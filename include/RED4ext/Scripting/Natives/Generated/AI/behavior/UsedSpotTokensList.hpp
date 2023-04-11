#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/SpotUsageToken.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct UsedSpotTokensList : ISerializable
{
    static constexpr const char* NAME = "AIbehaviorUsedSpotTokensList";
    static constexpr const char* ALIAS = "UsedSpotTokensList";

    DynArray<AI::SpotUsageToken> tokens; // 30
};
RED4EXT_ASSERT_SIZE(UsedSpotTokensList, 0x40);
} // namespace AI::behavior
using AIbehaviorUsedSpotTokensList = AI::behavior::UsedSpotTokensList;
using UsedSpotTokensList = AI::behavior::UsedSpotTokensList;
} // namespace RED4ext

// clang-format on
