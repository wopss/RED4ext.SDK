#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace game { 
struct WeakspotObject : game::Object
{
    static constexpr const char* NAME = "gameWeakspotObject";
    static constexpr const char* ALIAS = "WeakspotObject";

    uint8_t unk230[0x278 - 0x230]; // 230
};
RED4EXT_ASSERT_SIZE(WeakspotObject, 0x278);
} // namespace game
using WeakspotObject = game::WeakspotObject;
} // namespace RED4ext
