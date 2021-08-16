#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/IDynamicEntityIDSystem.hpp>

namespace RED4ext
{
namespace game { 
struct DynamicEntityIDSystem : game::IDynamicEntityIDSystem
{
    static constexpr const char* NAME = "gameDynamicEntityIDSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x110 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(DynamicEntityIDSystem, 0x110);
} // namespace game
} // namespace RED4ext
