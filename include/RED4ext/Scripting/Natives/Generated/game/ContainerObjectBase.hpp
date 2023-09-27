#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/LootContainerBase.hpp>

namespace RED4ext
{
namespace game
{
struct ContainerObjectBase : game::LootContainerBase
{
    static constexpr const char* NAME = "gameContainerObjectBase";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk268[0x28D - 0x268]; // 268
    bool giveHandicapAmmo; // 28D
    uint8_t unk28E[0x2B0 - 0x28E]; // 28E
};
RED4EXT_ASSERT_SIZE(ContainerObjectBase, 0x2B0);
} // namespace game
using gameContainerObjectBase = game::ContainerObjectBase;
} // namespace RED4ext

// clang-format on
