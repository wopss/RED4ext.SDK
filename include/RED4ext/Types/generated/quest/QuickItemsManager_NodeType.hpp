#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/quest/IUIManagerNodeType.hpp>
#include <RED4ext/Types/generated/quest/QuickItemsSet.hpp>

namespace RED4ext
{
namespace quest { 
struct QuickItemsManager_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questQuickItemsManager_NodeType";
    static constexpr const char* ALIAS = NAME;

    quest::QuickItemsSet set; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(QuickItemsManager_NodeType, 0x40);
} // namespace quest
} // namespace RED4ext
