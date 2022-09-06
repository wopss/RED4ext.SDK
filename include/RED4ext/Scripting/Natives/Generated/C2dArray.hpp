#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
struct C2dArray : CResource
{
    static constexpr const char* NAME = "C2dArray";
    static constexpr const char* ALIAS = NAME;

    DynArray<CString> headers; // 40
    DynArray<DynArray<CString>> data; // 50
};
RED4EXT_ASSERT_SIZE(C2dArray, 0x60);
} // namespace RED4ext

// clang-format on
