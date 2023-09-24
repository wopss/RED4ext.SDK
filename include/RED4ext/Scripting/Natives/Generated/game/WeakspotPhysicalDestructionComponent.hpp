#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/WeakspotPhysicalDestructionProperties.hpp>

namespace RED4ext
{
namespace game
{
struct WeakspotPhysicalDestructionComponent
{
    static constexpr const char* NAME = "gameWeakspotPhysicalDestructionComponent";
    static constexpr const char* ALIAS = "WeakspotPhysicalDestructionComponent";

    CName componentName; // 00
    bool useDefaultOwnerProperties; // 08
    uint8_t unk09[0xC - 0x9]; // 9
    game::WeakspotPhysicalDestructionProperties destructionProperties; // 0C
};
RED4EXT_ASSERT_SIZE(WeakspotPhysicalDestructionComponent, 0x10);
} // namespace game
using gameWeakspotPhysicalDestructionComponent = game::WeakspotPhysicalDestructionComponent;
using WeakspotPhysicalDestructionComponent = game::WeakspotPhysicalDestructionComponent;
} // namespace RED4ext

// clang-format on
