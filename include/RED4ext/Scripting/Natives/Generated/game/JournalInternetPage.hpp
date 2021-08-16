#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalFactNameValue.hpp>

namespace RED4ext
{
namespace game { struct JournalInternetImage; }
namespace game { struct JournalInternetRectangle; }
namespace game { struct JournalInternetText; }
namespace game { struct JournalInternetVideo; }
namespace ink { struct WidgetLibraryResource; }

namespace game { 
struct JournalInternetPage : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalInternetPage";
    static constexpr const char* ALIAS = "JournalInternetPage";

    CString address; // 60
    DynArray<game::JournalFactNameValue> factsToSet; // 80
    RaRef<ink::WidgetLibraryResource> widgetFile; // 90
    float scale; // 98
    uint8_t unk9C[0xA0 - 0x9C]; // 9C
    DynArray<Handle<game::JournalInternetText>> texts; // A0
    DynArray<Handle<game::JournalInternetRectangle>> rectangles; // B0
    DynArray<Handle<game::JournalInternetImage>> images; // C0
    DynArray<Handle<game::JournalInternetVideo>> videos; // D0
    bool additionallyFilledFromScripts; // E0
    uint8_t unkE1[0xE8 - 0xE1]; // E1
};
RED4EXT_ASSERT_SIZE(JournalInternetPage, 0xE8);
} // namespace game
using JournalInternetPage = game::JournalInternetPage;
} // namespace RED4ext
