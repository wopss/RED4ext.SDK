#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace anim { struct FacialSetup; }

namespace anim
{
struct FacialCustomizationTargetEntryTemp
{
    static constexpr const char* NAME = "animFacialCustomizationTargetEntryTemp";
    static constexpr const char* ALIAS = NAME;

    RaRef<anim::FacialSetup> setup; // 00
    DynArray<CName> targetNames; // 08
};
RED4EXT_ASSERT_SIZE(FacialCustomizationTargetEntryTemp, 0x18);
} // namespace anim
using animFacialCustomizationTargetEntryTemp = anim::FacialCustomizationTargetEntryTemp;
} // namespace RED4ext

// clang-format on
