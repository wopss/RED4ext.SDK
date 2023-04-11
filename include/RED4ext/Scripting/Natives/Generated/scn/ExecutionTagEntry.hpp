#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace scn
{
struct ExecutionTagEntry
{
    static constexpr const char* NAME = "scnExecutionTagEntry";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    uint8_t flags; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(ExecutionTagEntry, 0x10);
} // namespace scn
using scnExecutionTagEntry = scn::ExecutionTagEntry;
} // namespace RED4ext

// clang-format on
