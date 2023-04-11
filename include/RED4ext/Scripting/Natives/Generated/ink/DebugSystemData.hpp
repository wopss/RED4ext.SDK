#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/DebugLayerEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ILayerSystemData.hpp>

namespace RED4ext
{
namespace ink { struct WidgetLibraryResource; }

namespace ink
{
struct DebugSystemData : ink::ILayerSystemData
{
    static constexpr const char* NAME = "inkDebugSystemData";
    static constexpr const char* ALIAS = NAME;

    DynArray<ink::DebugLayerEntry> entries; // 48
    Ref<ink::WidgetLibraryResource> rootLibrary; // 58
};
RED4EXT_ASSERT_SIZE(DebugSystemData, 0x70);
} // namespace ink
using inkDebugSystemData = ink::DebugSystemData;
} // namespace RED4ext

// clang-format on
