#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game { 
struct SimpleOccupantSlotSpawner : ent::IComponent
{
    static constexpr const char* NAME = "gameSimpleOccupantSlotSpawner";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0x148 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(SimpleOccupantSlotSpawner, 0x148);
} // namespace game
} // namespace RED4ext
