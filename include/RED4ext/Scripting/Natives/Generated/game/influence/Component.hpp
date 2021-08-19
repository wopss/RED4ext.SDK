#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace game::influence { 
struct Component : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameinfluenceComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk120[0x400 - 0x120]; // 120
};
RED4EXT_ASSERT_SIZE(Component, 0x400);
} // namespace game::influence
} // namespace RED4ext
