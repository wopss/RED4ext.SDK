#pragma once

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

namespace game { 
struct JournalInternetSite : game::JournalFileEntry
{
    static constexpr const char* NAME = "gameJournalInternetSite";
    static constexpr const char* ALIAS = "JournalInternetSite";

    LocalizationString shortName; // 90
    Handle<game::JournalPath> mainPagePath; // B8
    bool ignoredAtDesktop; // C8
    uint8_t unkC9[0xD0 - 0xC9]; // C9
    RaRef<ink::TextureAtlas> textureAtlas; // D0
    CName texturePart; // D8
};
RED4EXT_ASSERT_SIZE(JournalInternetSite, 0xE0);
} // namespace game
using JournalInternetSite = game::JournalInternetSite;
} // namespace RED4ext
