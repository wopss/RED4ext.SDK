#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <RED4ext/Scripting/Natives/questICharacterConditionType.hpp>

namespace RED4ext
{
RED4EXT_ASSERT_SIZE(quest::ICharacterConditionType, 0x78);
using questICharacterConditionType = quest::ICharacterConditionType;
} // namespace RED4ext

/*
#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct ICharacterConditionType : quest::IConditionType
{
    static constexpr const char* NAME = "questICharacterConditionType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference attackerRef; // 38
    bool isPlayer; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
};
RED4EXT_ASSERT_SIZE(ICharacterConditionType, 0x78);
} // namespace quest
using questICharacterConditionType = quest::ICharacterConditionType;
} // namespace RED4ext
*/

// clang-format on
