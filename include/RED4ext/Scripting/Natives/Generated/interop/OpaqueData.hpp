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
struct OpaqueData
{
    static constexpr const char* NAME = "interopOpaqueData";
    static constexpr const char* ALIAS = NAME;

    CString description; // 00
    CString payload; // 20
    int32_t version; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(OpaqueData, 0x48);
} // namespace interop
using interopOpaqueData = interop::OpaqueData;
} // namespace RED4ext

// clang-format on
