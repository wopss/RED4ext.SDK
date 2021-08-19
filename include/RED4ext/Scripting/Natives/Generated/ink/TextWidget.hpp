#pragma once

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

namespace ink { 
struct TextWidget : ink::LeafWidget
{
    static constexpr const char* NAME = "inkTextWidget";
    static constexpr const char* ALIAS = NAME;

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
    uint8_t unk280[0x2B8 - 0x280]; // 280
    text::LetterCase letterCase; // 2B8
    uint8_t unk2B9[0x2C0 - 0x2B9]; // 2B9
    uint32_t tracking; // 2C0
    bool lockFontInGame; // 2C4
    uint8_t unk2C5[0x2C8 - 0x2C5]; // 2C5
    LocalizationString localizationString; // 2C8
    uint8_t unk2F0[0x320 - 0x2F0]; // 2F0
    float lineHeightPercentage; // 320
    uint8_t unk324[0x328 - 0x324]; // 324
    float scrollTextSpeed; // 328
    uint16_t scrollDelay; // 32C
    uint8_t unk32E[0x340 - 0x32E]; // 32E
    text::WrappingInfo wrappingInfo; // 340
    text::JustificationType justification; // 34C
    text::VerticalAlignment textVerticalAlignment; // 34D
    text::HorizontalAlignment textHorizontalAlignment; // 34E
    uint8_t unk34F[0x350 - 0x34F]; // 34F
    text::OverflowPolicy textOverflowPolicy; // 350
    uint8_t unk351[0x420 - 0x351]; // 351
};
RED4EXT_ASSERT_SIZE(TextWidget, 0x420);
} // namespace ink
} // namespace RED4ext
