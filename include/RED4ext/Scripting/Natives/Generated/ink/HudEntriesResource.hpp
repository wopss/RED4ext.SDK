#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/HudWidgetSpawnEntry.hpp>

namespace RED4ext
{
namespace ink { struct WidgetLibraryResource; }

namespace ink
{
struct HudEntriesResource : CResource
{
    static constexpr const char* NAME = "inkHudEntriesResource";
    static constexpr const char* ALIAS = NAME;

    Ref<ink::WidgetLibraryResource> rootWidget; // 40
    DynArray<ink::HudWidgetSpawnEntry> entries; // 58
    CName themeOverride; // 68
};
RED4EXT_ASSERT_SIZE(HudEntriesResource, 0x70);
} // namespace ink
using inkHudEntriesResource = ink::HudEntriesResource;
} // namespace RED4ext

// clang-format on
