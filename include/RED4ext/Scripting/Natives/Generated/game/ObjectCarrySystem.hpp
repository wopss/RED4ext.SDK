#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IObjectCarrySystem.hpp>

namespace RED4ext
{
namespace game { 
struct ObjectCarrySystem : game::IObjectCarrySystem
{
    static constexpr const char* NAME = "gameObjectCarrySystem";
    static constexpr const char* ALIAS = "ObjectCarrySystem";

    uint8_t unk48[0x3B8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ObjectCarrySystem, 0x3B8);
} // namespace game
using ObjectCarrySystem = game::ObjectCarrySystem;
} // namespace RED4ext
