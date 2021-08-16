#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/EntityReference.hpp>
#include <RED4ext/Types/generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { 
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
} // namespace RED4ext
