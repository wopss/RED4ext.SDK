#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ILayerSystemData.hpp>

namespace RED4ext
{
namespace ink { struct HudEntriesResource; }
namespace ink { struct WidgetLibraryResource; }

namespace ink
{
struct HudSystemData : ink::ILayerSystemData
{
    static constexpr const char* NAME = "inkHudSystemData";
    static constexpr const char* ALIAS = NAME;

    Ref<ink::WidgetLibraryResource> rootLibrary; // 48
    Ref<ink::HudEntriesResource> entriesResource; // 60
};
RED4EXT_ASSERT_SIZE(HudSystemData, 0x78);
} // namespace ink
using inkHudSystemData = ink::HudSystemData;
} // namespace RED4ext

// clang-format on
