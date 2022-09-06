#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/CurveResourceSetEntry.hpp>

namespace RED4ext
{
struct CurveResourceSet : CResource
{
    static constexpr const char* NAME = "CurveResourceSet";
    static constexpr const char* ALIAS = NAME;

    DynArray<CurveResourceSetEntry> curveResources; // 40
};
RED4EXT_ASSERT_SIZE(CurveResourceSet, 0x50);
} // namespace RED4ext

// clang-format on
