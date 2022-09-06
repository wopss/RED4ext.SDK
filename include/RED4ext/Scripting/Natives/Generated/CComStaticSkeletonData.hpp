#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CComStaticSkeletonDataEntry.hpp>

namespace RED4ext
{
struct CComStaticSkeletonData
{
    static constexpr const char* NAME = "CComStaticSkeletonData";
    static constexpr const char* ALIAS = NAME;

    DynArray<CComStaticSkeletonDataEntry> entries; // 00
};
RED4EXT_ASSERT_SIZE(CComStaticSkeletonData, 0x10);
} // namespace RED4ext

// clang-format on
