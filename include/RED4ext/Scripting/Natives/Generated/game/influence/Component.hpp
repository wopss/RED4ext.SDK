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
    static constexpr const char* ALIAS = "InfluenceComponent";

    uint8_t unk120[0x420 - 0x120]; // 120
};
RED4EXT_ASSERT_SIZE(Component, 0x420);
} // namespace game::influence
using InfluenceComponent = game::influence::Component;
} // namespace RED4ext
