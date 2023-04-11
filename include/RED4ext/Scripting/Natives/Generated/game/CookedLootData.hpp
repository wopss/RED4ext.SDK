#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game
{
struct CookedLootData : ISerializable
{
    static constexpr const char* NAME = "gameCookedLootData";
    static constexpr const char* ALIAS = NAME;

    DynArray<TweakDBID> lootTables; // 30
    TweakDBID contentAssignment; // 40
};
RED4EXT_ASSERT_SIZE(CookedLootData, 0x48);
} // namespace game
using gameCookedLootData = game::CookedLootData;
} // namespace RED4ext

// clang-format on
