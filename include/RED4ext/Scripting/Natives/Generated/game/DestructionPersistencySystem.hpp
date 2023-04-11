#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IDestructionPersistencySystem.hpp>

namespace RED4ext
{
namespace game
{
struct DestructionPersistencySystem : game::IDestructionPersistencySystem
{
    static constexpr const char* NAME = "gameDestructionPersistencySystem";
    static constexpr const char* ALIAS = "IDestructionPersistencySystem";

    uint8_t unk48[0xD8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(DestructionPersistencySystem, 0xD8);
} // namespace game
using gameDestructionPersistencySystem = game::DestructionPersistencySystem;
using IDestructionPersistencySystem = game::DestructionPersistencySystem;
} // namespace RED4ext

// clang-format on
