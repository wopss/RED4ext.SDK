#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/LootContainerBase.hpp>

namespace RED4ext
{
namespace game { 
struct ContainerObjectBase : game::LootContainerBase
{
    static constexpr const char* NAME = "gameContainerObjectBase";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk260[0x2A8 - 0x260]; // 260
};
RED4EXT_ASSERT_SIZE(ContainerObjectBase, 0x2A8);
} // namespace game
} // namespace RED4ext
