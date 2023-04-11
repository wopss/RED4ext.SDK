#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IEntityStubSystem.hpp>

namespace RED4ext
{
namespace game
{
struct EntityStubSystem : game::IEntityStubSystem
{
    static constexpr const char* NAME = "gameEntityStubSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xC8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(EntityStubSystem, 0xC8);
} // namespace game
using gameEntityStubSystem = game::EntityStubSystem;
} // namespace RED4ext

// clang-format on
