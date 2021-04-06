#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace game { 
struct CpoArmouryItem : game::Object
{
    static constexpr const char* NAME = "gameCpoArmouryItem";
    static constexpr const char* ALIAS = NAME;

    TweakDBID armouryItemID; // 228
    uint8_t unk230[0x240 - 0x230]; // 230
};
RED4EXT_ASSERT_SIZE(CpoArmouryItem, 0x240);
} // namespace game
} // namespace RED4ext
