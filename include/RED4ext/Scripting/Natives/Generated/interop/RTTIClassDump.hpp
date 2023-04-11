#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/interop/RTTIClassDumpEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/interop/RTTIResourceDumpInfo.hpp>

namespace RED4ext
{
namespace interop
{
struct RTTIClassDump
{
    static constexpr const char* NAME = "interopRTTIClassDump";
    static constexpr const char* ALIAS = NAME;

    DynArray<CString> classNames; // 00
    DynArray<CString> descriptiveNames; // 10
    DynArray<interop::RTTIResourceDumpInfo> resourceInfos; // 20
    DynArray<interop::RTTIClassDumpEntry> entries; // 30
};
RED4EXT_ASSERT_SIZE(RTTIClassDump, 0x40);
} // namespace interop
using interopRTTIClassDump = interop::RTTIClassDump;
} // namespace RED4ext

// clang-format on
