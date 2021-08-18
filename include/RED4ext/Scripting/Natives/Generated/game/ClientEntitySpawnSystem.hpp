#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IClientEntitySpawnSystem.hpp>

namespace RED4ext
{
namespace game { 
struct ClientEntitySpawnSystem : game::IClientEntitySpawnSystem
{
    static constexpr const char* NAME = "gameClientEntitySpawnSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ClientEntitySpawnSystem, 0x50);
} // namespace game
} // namespace RED4ext
