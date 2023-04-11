#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatPoolData.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatsObjectID.hpp>

namespace RED4ext
{
namespace game
{
struct StatPoolsSystemSave : ISerializable
{
    static constexpr const char* NAME = "gameStatPoolsSystemSave";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::StatsObjectID> mapping; // 30
    DynArray<game::StatPoolData> statPools; // 40
};
RED4EXT_ASSERT_SIZE(StatPoolsSystemSave, 0x50);
} // namespace game
using gameStatPoolsSystemSave = game::StatPoolsSystemSave;
} // namespace RED4ext

// clang-format on
