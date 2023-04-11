#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/EulerAngles.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/GenderMask.hpp>

namespace RED4ext
{
namespace scn::fpp
{
struct GenderSpecificParams
{
    static constexpr const char* NAME = "scnfppGenderSpecificParams";
    static constexpr const char* ALIAS = NAME;

    scn::GenderMask genderMask; // 00
    uint8_t unk01[0x8 - 0x1]; // 1
    DynArray<EulerAngles> transitionBlendInTrajectorySpaceAngles; // 08
    DynArray<float> transitionBlendInCameraSpace; // 18
    DynArray<EulerAngles> transitionEndInputAngles; // 28
    EulerAngles idleCameraLs; // 38
    EulerAngles idleControlCameraMs; // 44
};
RED4EXT_ASSERT_SIZE(GenderSpecificParams, 0x50);
} // namespace scn::fpp
using scnfppGenderSpecificParams = scn::fpp::GenderSpecificParams;
} // namespace RED4ext

// clang-format on
