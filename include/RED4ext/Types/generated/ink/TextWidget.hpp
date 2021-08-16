#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ink/EHorizontalAlign.hpp>
#include <RED4ext/Types/generated/ink/EVerticalAlign.hpp>
#include <RED4ext/Types/generated/ink/LeafWidget.hpp>
#include <RED4ext/Types/generated/text/HorizontalAlignment.hpp>
#include <RED4ext/Types/generated/text/JustificationType.hpp>
#include <RED4ext/Types/generated/text/LetterCase.hpp>
#include <RED4ext/Types/generated/text/OverflowPolicy.hpp>
#include <RED4ext/Types/generated/text/VerticalAlignment.hpp>
#include <RED4ext/Types/generated/text/WrappingInfo.hpp>

namespace RED4ext
{
namespace ink { struct FontFamilyResource; }
namespace rend { struct Font; }

namespace ink { 
struct TextWidget : ink::LeafWidget
{
    static constexpr const char* NAME = "inkTextWidget";
    static constexpr const char* ALIAS = "inkText";

    uint8_t unk1F0[0x218 - 0x1F0]; // 1F0
    CString text; // 218
    CName textIdKey; // 238
    RaRef<ink::FontFamilyResource> fontFamily; // 240
    CName fontStyle; // 248
    uint32_t fontSize; // 250
    uint8_t unk254[0x258 - 0x254]; // 254
    ink::EHorizontalAlign contentHAlign; // 258
    ink::EVerticalAlign contentVAlign; // 259
    uint8_t unk25A[0x270 - 0x25A]; // 25A
    Handle<rend::Font> font; // 270
    uint8_t unk280[0x2B0 - 0x280]; // 280
    text::LetterCase letterCase; // 2B0
    uint8_t unk2B1[0x2B8 - 0x2B1]; // 2B1
    uint32_t tracking; // 2B8
    bool lockFontInGame; // 2BC
    uint8_t unk2BD[0x2C0 - 0x2BD]; // 2BD
    LocalizationString localizationString; // 2C0
    uint8_t unk2E8[0x308 - 0x2E8]; // 2E8
    float lineHeightPercentage; // 308
    uint8_t unk30C[0x310 - 0x30C]; // 30C
    float scrollTextSpeed; // 310
    uint16_t scrollDelay; // 314
    uint8_t unk316[0x328 - 0x316]; // 316
    text::WrappingInfo wrappingInfo; // 328
    text::JustificationType justification; // 334
    text::VerticalAlignment textVerticalAlignment; // 335
    text::HorizontalAlignment textHorizontalAlignment; // 336
    uint8_t unk337[0x338 - 0x337]; // 337
    text::OverflowPolicy textOverflowPolicy; // 338
    uint8_t unk339[0x410 - 0x339]; // 339
};
RED4EXT_ASSERT_SIZE(TextWidget, 0x410);
} // namespace ink
using inkText = ink::TextWidget;
} // namespace RED4ext
