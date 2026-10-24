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

    uint8_t unk210[0x258 - 0x210]; // 210
    CString text; // 258
    CName textIdKey; // 278
    RaRef<ink::FontFamilyResource> fontFamily; // 280
    CName fontStyle; // 288
    uint32_t fontSize; // 290
    uint8_t unk294[0x298 - 0x294]; // 294
    ink::EHorizontalAlign contentHAlign; // 298
    ink::EVerticalAlign contentVAlign; // 299
    uint8_t unk29A[0x2B0 - 0x29A]; // 29A
    Handle<rend::Font> font; // 2B0
    uint8_t unk2C0[0x2F8 - 0x2C0]; // 2C0
    text::LetterCase letterCase; // 2F8
    uint8_t unk2F9[0x300 - 0x2F9]; // 2F9
    uint32_t tracking; // 300
    bool lockFontInGame; // 304
    uint8_t unk305[0x308 - 0x305]; // 305
    LocalizationString localizationString; // 308
    uint8_t unk330[0x360 - 0x330]; // 330
    float lineHeightPercentage; // 360
    uint8_t unk364[0x368 - 0x364]; // 364
    float scrollTextSpeed; // 368
    uint16_t scrollDelay; // 36C
    uint8_t unk36E[0x380 - 0x36E]; // 36E
    text::WrappingInfo wrappingInfo; // 380
    text::JustificationType justification; // 38C
    text::VerticalAlignment textVerticalAlignment; // 38D
    text::HorizontalAlignment textHorizontalAlignment; // 38E
    uint8_t unk38F[0x390 - 0x38F]; // 38F
    text::OverflowPolicy textOverflowPolicy; // 390
    uint8_t unk391[0x460 - 0x391]; // 391
};
RED4EXT_ASSERT_SIZE(TextWidget, 0x460);
} // namespace ink
using inkTextWidget = ink::TextWidget;
using inkText = ink::TextWidget;
} // namespace RED4ext

// clang-format on
