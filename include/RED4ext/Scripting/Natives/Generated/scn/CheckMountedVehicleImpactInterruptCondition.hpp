#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IInterruptCondition.hpp>

namespace RED4ext
{
namespace scn
{
struct CheckMountedVehicleImpactInterruptCondition : scn::IInterruptCondition
{
    static constexpr const char* NAME = "scnCheckMountedVehicleImpactInterruptCondition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CheckMountedVehicleImpactInterruptCondition, 0x30);
} // namespace scn
using scnCheckMountedVehicleImpactInterruptCondition = scn::CheckMountedVehicleImpactInterruptCondition;
} // namespace RED4ext

// clang-format on
