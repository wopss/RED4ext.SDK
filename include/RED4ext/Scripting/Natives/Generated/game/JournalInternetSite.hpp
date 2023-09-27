#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalFileEntry.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }
namespace ink { struct TextureAtlas; }

namespace game
{
struct JournalInternetSite : game::JournalFileEntry
{
    static constexpr const char* NAME = "gameJournalInternetSite";
    static constexpr const char* ALIAS = "JournalInternetSite";

    LocalizationString shortName; // A0
    Handle<game::JournalPath> mainPagePath; // C8
    bool ignoredAtDesktop; // D8
    uint8_t unkD9[0xE0 - 0xD9]; // D9
    RaRef<ink::TextureAtlas> textureAtlas; // E0
    CName texturePart; // E8
};
RED4EXT_ASSERT_SIZE(JournalInternetSite, 0xF0);
} // namespace game
using gameJournalInternetSite = game::JournalInternetSite;
using JournalInternetSite = game::JournalInternetSite;
} // namespace RED4ext

// clang-format on
