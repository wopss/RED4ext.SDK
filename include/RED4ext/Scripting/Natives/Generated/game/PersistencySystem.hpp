#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IPersistencySystem.hpp>

namespace RED4ext
{
namespace game
{
struct PersistencySystem : game::IPersistencySystem
{
    static constexpr const char* NAME = "gamePersistencySystem";
    static constexpr const char* ALIAS = "GamePersistencySystem";

    uint8_t unk48[0x290 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PersistencySystem, 0x290);
} // namespace game
using gamePersistencySystem = game::PersistencySystem;
using GamePersistencySystem = game::PersistencySystem;
} // namespace RED4ext

// clang-format on
