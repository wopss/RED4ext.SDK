#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/IBackendData.hpp>

namespace RED4ext
{
namespace ink { struct Widget; }

namespace ink
{
struct WidgetBackendData : IBackendData
{
    static constexpr const char* NAME = "inkWidgetBackendData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
    bool isLocked; // 38
    bool isHiddenInEditor; // 39
    uint8_t unk3A[0x50 - 0x3A]; // 3A
    CName boundLibraryItemName; // 50
    WeakHandle<ink::Widget> owner; // 58
    uint8_t unk68[0x70 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(WidgetBackendData, 0x70);
} // namespace ink
using inkWidgetBackendData = ink::WidgetBackendData;
} // namespace RED4ext

// clang-format on
