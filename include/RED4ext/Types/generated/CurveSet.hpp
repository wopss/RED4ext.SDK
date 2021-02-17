#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/CResource.hpp>
#include <RED4ext/Types/generated/CurveSetEntry.hpp>

namespace RED4ext
{
struct CurveSet : CResource
{
    static constexpr const char* NAME = "CurveSet";
    static constexpr const char* ALIAS = NAME;

    DynArray<CurveSetEntry> curves; // 40
};
RED4EXT_ASSERT_SIZE(CurveSet, 0x50);
} // namespace RED4ext
