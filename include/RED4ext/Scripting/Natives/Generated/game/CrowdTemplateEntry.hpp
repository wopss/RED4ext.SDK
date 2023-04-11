#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CrowdEntryType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CrowdTemplateEntryPhase.hpp>

namespace RED4ext
{
namespace game
{
struct CrowdTemplateEntry
{
    static constexpr const char* NAME = "gameCrowdTemplateEntry";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> markings; // 00
    DynArray<game::CrowdTemplateEntryPhase> phases; // 10
    CName entryName; // 20
    game::CrowdEntryType type; // 28
    uint8_t unk29[0x30 - 0x29]; // 29
};
RED4EXT_ASSERT_SIZE(CrowdTemplateEntry, 0x30);
} // namespace game
using gameCrowdTemplateEntry = game::CrowdTemplateEntry;
} // namespace RED4ext

// clang-format on
