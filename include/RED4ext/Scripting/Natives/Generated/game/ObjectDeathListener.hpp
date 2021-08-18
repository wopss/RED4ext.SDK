#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IStatPoolsListener.hpp>

namespace RED4ext
{
namespace game { 
struct ObjectDeathListener : game::IStatPoolsListener
{
    static constexpr const char* NAME = "gameObjectDeathListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x68 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ObjectDeathListener, 0x68);
} // namespace game
} // namespace RED4ext
