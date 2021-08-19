#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ItemObject.hpp>

namespace RED4ext
{
namespace game { struct EffectSet; }

namespace game::weapon { 
struct Object : game::ItemObject
{
    static constexpr const char* NAME = "gameweaponObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk328[0x358 - 0x328]; // 328
    Ref<game::EffectSet> effect; // 358
    uint8_t unk370[0x550 - 0x370]; // 370
};
RED4EXT_ASSERT_SIZE(Object, 0x550);
} // namespace game::weapon
} // namespace RED4ext
