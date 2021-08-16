#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game { 
struct WeakspotComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameWeakspotComponent";
    static constexpr const char* ALIAS = "WeakspotComponent";

    uint8_t unk90[0xA0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(WeakspotComponent, 0xA0);
} // namespace game
using WeakspotComponent = game::WeakspotComponent;
} // namespace RED4ext
