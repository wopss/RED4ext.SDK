#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/DialogLineLanguage.hpp>

namespace RED4ext
{
namespace scn
{
struct DialogDisplayString
{
    static constexpr const char* NAME = "scnDialogDisplayString";
    static constexpr const char* ALIAS = NAME;

    CString text; // 00
    CString translation; // 20
    CString preTranslatedText; // 40
    CString postTranslatedText; // 60
    scn::DialogLineLanguage language; // 80
    uint8_t unk84[0x88 - 0x84]; // 84
};
RED4EXT_ASSERT_SIZE(DialogDisplayString, 0x88);
} // namespace scn
using scnDialogDisplayString = scn::DialogDisplayString;
} // namespace RED4ext

// clang-format on
