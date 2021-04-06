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

    uint8_t unk248[0x290 - 0x248]; // 248
};
RED4EXT_ASSERT_SIZE(ContainerObjectBase, 0x290);
} // namespace game
} // namespace RED4ext
