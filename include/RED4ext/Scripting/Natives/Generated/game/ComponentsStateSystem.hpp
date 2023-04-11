#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IComponentsStateSystem.hpp>

namespace RED4ext
{
namespace game
{
struct ComponentsStateSystem : game::IComponentsStateSystem
{
    static constexpr const char* NAME = "gameComponentsStateSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x98 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ComponentsStateSystem, 0x98);
} // namespace game
using gameComponentsStateSystem = game::ComponentsStateSystem;
} // namespace RED4ext

// clang-format on
