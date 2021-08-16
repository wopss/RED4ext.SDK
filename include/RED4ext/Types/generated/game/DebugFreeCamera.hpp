#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace game { 
struct DebugFreeCamera : game::Object
{
    static constexpr const char* NAME = "gameDebugFreeCamera";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk230[0x290 - 0x230]; // 230
};
RED4EXT_ASSERT_SIZE(DebugFreeCamera, 0x290);
} // namespace game
} // namespace RED4ext
