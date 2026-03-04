#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game
{
struct RewardPack
{
    static constexpr const char* NAME = "gameRewardPack";
    static constexpr const char* ALIAS = "GOGRewardPack";

    String id; // 00
    String title; // 20
    String reason; // 40
    CName iconSlot; // 60
    CName group; // 68
    CName slotType; // 70
    DynArray<uint64_t> rewards; // 78
};
RED4EXT_ASSERT_SIZE(RewardPack, 0x88);
} // namespace game
using gameRewardPack = game::RewardPack;
using GOGRewardPack = game::RewardPack;
} // namespace RED4ext

// clang-format on
