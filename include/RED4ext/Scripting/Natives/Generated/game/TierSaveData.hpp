#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/GlobalTierSaveData.hpp>

namespace RED4ext
{
namespace game
{
struct TierSaveData : ISerializable
{
    static constexpr const char* NAME = "gameTierSaveData";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::GlobalTierSaveData> globalTiers; // 30
};
RED4EXT_ASSERT_SIZE(TierSaveData, 0x40);
} // namespace game
using gameTierSaveData = game::TierSaveData;
} // namespace RED4ext

// clang-format on
