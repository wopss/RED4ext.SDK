#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game
{
struct FinisherSyncData
{
    static constexpr const char* NAME = "gameFinisherSyncData";
    static constexpr const char* ALIAS = NAME;

    CName syncAnimSlotName; // 00
    TweakDBID effector; // 08
};
RED4EXT_ASSERT_SIZE(FinisherSyncData, 0x10);
} // namespace game
using gameFinisherSyncData = game::FinisherSyncData;
} // namespace RED4ext

// clang-format on
