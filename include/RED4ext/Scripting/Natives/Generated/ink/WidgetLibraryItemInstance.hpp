#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ETextureResolution.hpp>

namespace RED4ext
{
namespace ink { struct IWidgetController; }
namespace ink { struct Widget; }

namespace ink
{
struct WidgetLibraryItemInstance : ISerializable
{
    static constexpr const char* NAME = "inkWidgetLibraryItemInstance";
    static constexpr const char* ALIAS = NAME;

    ink::ETextureResolution rootResolution; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
    Handle<ink::Widget> rootWidget; // 38
    Handle<ink::IWidgetController> gameController; // 48
};
RED4EXT_ASSERT_SIZE(WidgetLibraryItemInstance, 0x58);
} // namespace ink
using inkWidgetLibraryItemInstance = ink::WidgetLibraryItemInstance;
} // namespace RED4ext

// clang-format on
