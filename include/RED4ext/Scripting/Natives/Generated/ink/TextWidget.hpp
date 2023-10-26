#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EHorizontalAlign.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/EVerticalAlign.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LeafWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/text/HorizontalAlignment.hpp>
#include <RED4ext/Scripting/Natives/Generated/text/JustificationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/text/LetterCase.hpp>
#include <RED4ext/Scripting/Natives/Generated/text/OverflowPolicy.hpp>
#include <RED4ext/Scripting/Natives/Generated/text/VerticalAlignment.hpp>
#include <RED4ext/Scripting/Natives/Generated/text/WrappingInfo.hpp>

namespace RED4ext
{
namespace ink { struct FontFamilyResource; }
namespace rend { struct Font; }

namespace ink
{
struct __declspec(align(0x10)) TextWidget : ink::LeafWidget
{
    static constexpr const char* NAME = "inkTextWidget";
    static constexpr const char* ALIAS = "inkText";

    uint8_t unk200[0x228 - 0x200]; // 200
    CString text; // 228
    CName textIdKey; // 248
    RaRef<ink::FontFamilyResource> fontFamily; // 250
    CName fontStyle; // 258
    uint32_t fontSize; // 260
    uint8_t unk264[0x268 - 0x264]; // 264
    ink::EHorizontalAlign contentHAlign; // 268
    ink::EVerticalAlign contentVAlign; // 269
    uint8_t unk26A[0x280 - 0x26A]; // 26A
    Handle<rend::Font> font; // 280
    uint8_t unk290[0x2C8 - 0x290]; // 290
    text::LetterCase letterCase; // 2C8
    uint8_t unk2C9[0x2D0 - 0x2C9]; // 2C9
    uint32_t tracking; // 2D0
    bool lockFontInGame; // 2D4
    uint8_t unk2D5[0x2D8 - 0x2D5]; // 2D5
    LocalizationString localizationString; // 2D8
    uint8_t unk300[0x330 - 0x300]; // 300
    float lineHeightPercentage; // 330
    uint8_t unk334[0x338 - 0x334]; // 334
    float scrollTextSpeed; // 338
    uint16_t scrollDelay; // 33C
    uint8_t unk33E[0x350 - 0x33E]; // 33E
    text::WrappingInfo wrappingInfo; // 350
    text::JustificationType justification; // 35C
    text::VerticalAlignment textVerticalAlignment; // 35D
    text::HorizontalAlignment textHorizontalAlignment; // 35E
    uint8_t unk35F[0x360 - 0x35F]; // 35F
    text::OverflowPolicy textOverflowPolicy; // 360
    uint8_t unk361[0x430 - 0x361]; // 361
};
RED4EXT_ASSERT_SIZE(TextWidget, 0x430);
} // namespace ink
using inkTextWidget = ink::TextWidget;
using inkText = ink::TextWidget;
} // namespace RED4ext

// clang-format on
