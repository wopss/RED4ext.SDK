#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/SpawnMode.hpp>

namespace RED4ext
{
namespace ink { struct WidgetLibraryResource; }

namespace ink { 
struct MenuEntry
{
    static constexpr const char* NAME = "inkMenuEntry";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    uint32_t depth; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    Ref<ink::WidgetLibraryResource> menuWidget; // 10
    ink::SpawnMode spawnMode; // 28
    bool isAffectedByFadeout; // 2C
    uint8_t unk2D[0x30 - 0x2D]; // 2D
};
RED4EXT_ASSERT_SIZE(MenuEntry, 0x30);
} // namespace ink
} // namespace RED4ext
