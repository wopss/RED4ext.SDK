#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/IMessageLocation.hpp>

namespace RED4ext
{
namespace tools
{
struct MessageLocation_Webpage : tools::IMessageLocation
{
    static constexpr const char* NAME = "toolsMessageLocation_Webpage";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
    CString link; // 38
    CString text; // 58
};
RED4EXT_ASSERT_SIZE(MessageLocation_Webpage, 0x78);
} // namespace tools
using toolsMessageLocation_Webpage = tools::MessageLocation_Webpage;
} // namespace RED4ext

// clang-format on
