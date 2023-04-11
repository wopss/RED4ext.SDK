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
struct RTTIResourceDumpInfo
{
    static constexpr const char* NAME = "interopRTTIResourceDumpInfo";
    static constexpr const char* ALIAS = NAME;

    CString extension; // 00
    CString deprecatedExtension; // 20
    CString friendlyDescription; // 40
};
RED4EXT_ASSERT_SIZE(RTTIResourceDumpInfo, 0x60);
} // namespace interop
using interopRTTIResourceDumpInfo = interop::RTTIResourceDumpInfo;
} // namespace RED4ext

// clang-format on
