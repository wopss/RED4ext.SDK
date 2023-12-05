#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IPhantomEntitySystem.hpp>

namespace RED4ext
{
namespace game
{
struct PhantomEntitySystem : game::IPhantomEntitySystem
{
    static constexpr const char* NAME = "gamePhantomEntitySystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x3320 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PhantomEntitySystem, 0x3320);
} // namespace game
using gamePhantomEntitySystem = game::PhantomEntitySystem;
} // namespace RED4ext

// clang-format on
