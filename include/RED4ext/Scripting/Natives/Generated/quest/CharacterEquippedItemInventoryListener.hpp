#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IInventoryListener.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterEquippedItemInventoryListener : game::IInventoryListener
{
    static constexpr const char* NAME = "questCharacterEquippedItemInventoryListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(CharacterEquippedItemInventoryListener, 0x48);
} // namespace quest
using questCharacterEquippedItemInventoryListener = quest::CharacterEquippedItemInventoryListener;
} // namespace RED4ext

// clang-format on
