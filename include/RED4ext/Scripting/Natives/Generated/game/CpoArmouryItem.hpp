#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace game { 
struct CpoArmouryItem : game::Object
{
    static constexpr const char* NAME = "gameCpoArmouryItem";
    static constexpr const char* ALIAS = NAME;

    TweakDBID armouryItemID; // 230
    uint8_t unk238[0x248 - 0x238]; // 238
};
RED4EXT_ASSERT_SIZE(CpoArmouryItem, 0x248);
} // namespace game
} // namespace RED4ext
