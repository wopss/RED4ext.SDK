#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>

namespace RED4ext
{
namespace ink { struct WidgetLibraryResource; }

namespace ink { 
struct LayerDefinition
{
    static constexpr const char* NAME = "inkLayerDefinition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0xC - 0x0]; // 0
    bool enabled; // 0C
    uint8_t unk0D[0x10 - 0xD]; // D
    Ref<ink::WidgetLibraryResource> rootLibrary; // 10
    bool activeByDefault; // 28
    bool isPermanent; // 29
    bool useGlobalStyleTheme; // 2A
    bool isAffectedByFadeout; // 2B
    bool useGameInput; // 2C
    uint8_t unk2D[0x30 - 0x2D]; // 2D
    CName inputContext; // 30
};
RED4EXT_ASSERT_SIZE(LayerDefinition, 0x38);
} // namespace ink
} // namespace RED4ext
