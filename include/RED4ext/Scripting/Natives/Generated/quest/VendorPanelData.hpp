#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/VendorData.hpp>

namespace RED4ext
{
namespace quest
{
struct VendorPanelData : IScriptable
{
    static constexpr const char* NAME = "questVendorPanelData";
    static constexpr const char* ALIAS = "VendorPanelData";

    game::VendorData data; // 40
    CString assetsLibrary; // 70
    CName rootItemName; // 90
};
RED4EXT_ASSERT_SIZE(VendorPanelData, 0x98);
} // namespace quest
using questVendorPanelData = quest::VendorPanelData;
using VendorPanelData = quest::VendorPanelData;
} // namespace RED4ext

// clang-format on
