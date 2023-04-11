#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace interop
{
struct StringWithID
{
    static constexpr const char* NAME = "interopStringWithID";
    static constexpr const char* ALIAS = NAME;

    CString text; // 00
    uint64_t id; // 20
};
RED4EXT_ASSERT_SIZE(StringWithID, 0x28);
} // namespace interop
using interopStringWithID = interop::StringWithID;
} // namespace RED4ext

// clang-format on
