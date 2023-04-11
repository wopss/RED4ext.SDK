#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IScalingData.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneTime.hpp>

namespace RED4ext
{
namespace scn
{
struct ScalingData_KeepRelationWithOtherEvents : scn::IScalingData
{
    static constexpr const char* NAME = "scnScalingData_KeepRelationWithOtherEvents";
    static constexpr const char* ALIAS = NAME;

    scn::SceneTime groupRfrncNdspaceStarttime; // 30
    scn::SceneTime groupRfrncNdspaceEndtime; // 34
};
RED4EXT_ASSERT_SIZE(ScalingData_KeepRelationWithOtherEvents, 0x38);
} // namespace scn
using scnScalingData_KeepRelationWithOtherEvents = scn::ScalingData_KeepRelationWithOtherEvents;
} // namespace RED4ext

// clang-format on
