#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/PlacedTrackItemPlayData.hpp>

namespace RED4ext
{
namespace effect
{
struct WeaponPlaneBlurPlayData : effect::PlacedTrackItemPlayData
{
    static constexpr const char* NAME = "effectWeaponPlaneBlurPlayData";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(WeaponPlaneBlurPlayData, 0x38);
} // namespace effect
using effectWeaponPlaneBlurPlayData = effect::WeaponPlaneBlurPlayData;
} // namespace RED4ext

// clang-format on
