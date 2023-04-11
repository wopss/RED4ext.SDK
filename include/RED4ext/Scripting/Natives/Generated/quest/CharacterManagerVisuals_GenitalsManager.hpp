#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerVisuals_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerVisuals_GenitalsManager : quest::ICharacterManagerVisuals_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerVisuals_GenitalsManager";
    static constexpr const char* ALIAS = NAME;

    CName bodyGroupName; // 70
    uint8_t unk78[0x7C - 0x78]; // 78
    bool enable; // 7C
    uint8_t unk7D[0x80 - 0x7D]; // 7D
};
RED4EXT_ASSERT_SIZE(CharacterManagerVisuals_GenitalsManager, 0x80);
} // namespace quest
using questCharacterManagerVisuals_GenitalsManager = quest::CharacterManagerVisuals_GenitalsManager;
} // namespace RED4ext

// clang-format on
