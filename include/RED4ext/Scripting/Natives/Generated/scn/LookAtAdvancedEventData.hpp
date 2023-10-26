#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtRequestForPart.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/AnimTargetBasicData.hpp>

namespace RED4ext
{
namespace scn
{
struct __declspec(align(0x10)) LookAtAdvancedEventData
{
    static constexpr const char* NAME = "scnLookAtAdvancedEventData";
    static constexpr const char* ALIAS = NAME;

    scn::AnimTargetBasicData basic; // 00
    DynArray<anim::LookAtRequestForPart> requests; // 50
};
RED4EXT_ASSERT_SIZE(LookAtAdvancedEventData, 0x60);
} // namespace scn
using scnLookAtAdvancedEventData = scn::LookAtAdvancedEventData;
} // namespace RED4ext

// clang-format on
