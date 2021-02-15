#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/LootContainerBase.hpp>

namespace RED4ext
{
namespace game { 
struct ContainerObjectBase : game::LootContainerBase
{
    static constexpr const char* NAME = "gameContainerObjectBase";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk250[0x298 - 0x250]; // 250
};
RED4EXT_ASSERT_SIZE(ContainerObjectBase, 0x298);
} // namespace game
} // namespace RED4ext
