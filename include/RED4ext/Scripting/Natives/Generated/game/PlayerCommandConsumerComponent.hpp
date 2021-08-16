#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game { 
struct PlayerCommandConsumerComponent : ent::IComponent
{
    static constexpr const char* NAME = "gamePlayerCommandConsumerComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0x170 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(PlayerCommandConsumerComponent, 0x170);
} // namespace game
} // namespace RED4ext
