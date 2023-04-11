#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLayout.hpp>

namespace RED4ext
{
namespace ink
{
struct WidgetSlotAttachmentParams
{
    static constexpr const char* NAME = "inkWidgetSlotAttachmentParams";
    static constexpr const char* ALIAS = NAME;

    CName slotID; // 00
    bool useSlotLayout; // 08
    uint8_t unk09[0xC - 0x9]; // 9
    ink::WidgetLayout layoutOverride; // 0C
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(WidgetSlotAttachmentParams, 0x40);
} // namespace ink
using inkWidgetSlotAttachmentParams = ink::WidgetSlotAttachmentParams;
} // namespace RED4ext

// clang-format on
