#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/shared/CommandResult.hpp>

namespace RED4ext
{
namespace shared
{
struct ResourceCommandOutcome
{
    static constexpr const char* NAME = "sharedResourceCommandOutcome";
    static constexpr const char* ALIAS = NAME;

    shared::CommandResult result; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CString message; // 08
    DynArray<CString> modifiedFiles; // 28
};
RED4EXT_ASSERT_SIZE(ResourceCommandOutcome, 0x38);
} // namespace shared
using sharedResourceCommandOutcome = shared::ResourceCommandOutcome;
} // namespace RED4ext

// clang-format on
