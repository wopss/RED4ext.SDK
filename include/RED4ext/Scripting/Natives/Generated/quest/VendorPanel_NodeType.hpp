#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct VendorPanel_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questVendorPanel_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool openVendorPanel; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    CString vendorId; // 40
    game::EntityReference objectRef; // 60
    CName scenarioName; // 98
    CString assetsLibrary; // A0
    CName rootItemName; // C0
};
RED4EXT_ASSERT_SIZE(VendorPanel_NodeType, 0xC8);
} // namespace quest
using questVendorPanel_NodeType = quest::VendorPanel_NodeType;
} // namespace RED4ext

// clang-format on
