#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { 
struct ItemsMeshesLoaded : red::Event
{
    static constexpr const char* NAME = "gameItemsMeshesLoaded";
    static constexpr const char* ALIAS = "gameItemsMeshesLoaded";

    uint8_t unk40[0x98 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ItemsMeshesLoaded, 0x98);
} // namespace game
} // namespace RED4ext
