#pragma once

// clang-format off

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
namespace game { struct JournalInternetCanvas; }
namespace game { struct JournalInternetImage; }
namespace game { struct JournalInternetRectangle; }
namespace game { struct JournalInternetText; }
namespace game { struct JournalInternetVideo; }
namespace ink { struct WidgetLibraryResource; }

namespace game
{
struct JournalInternetPage : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalInternetPage";
    static constexpr const char* ALIAS = "JournalInternetPage";

    CString address; // 70
    DynArray<game::JournalFactNameValue> factsToSet; // 90
    RaRef<ink::WidgetLibraryResource> widgetFile; // A0
    float scale; // A8
    uint8_t unkAC[0xB0 - 0xAC]; // AC
    DynArray<Handle<game::JournalInternetText>> texts; // B0
    DynArray<Handle<game::JournalInternetRectangle>> rectangles; // C0
    DynArray<Handle<game::JournalInternetImage>> images; // D0
    DynArray<Handle<game::JournalInternetVideo>> videos; // E0
    DynArray<Handle<game::JournalInternetCanvas>> canvases; // F0
    bool additionallyFilledFromScripts; // 100
    bool reloadOnZoomIn; // 101
    uint8_t unk102[0x108 - 0x102]; // 102
};
RED4EXT_ASSERT_SIZE(JournalInternetPage, 0x108);
} // namespace game
using gameJournalInternetPage = game::JournalInternetPage;
using JournalInternetPage = game::JournalInternetPage;
} // namespace RED4ext

// clang-format on
