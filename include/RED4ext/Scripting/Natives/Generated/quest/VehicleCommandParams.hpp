#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AICommandParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/VehicleCommandType.hpp>

namespace RED4ext
{
namespace quest::vehicle { struct ChaseParams; }
namespace quest::vehicle { struct FollowParams; }
namespace quest::vehicle { struct JoinTrafficParams; }
namespace quest::vehicle { struct OnSplineParams; }
namespace quest::vehicle { struct PanicParams; }
namespace quest::vehicle { struct RacingParams; }
namespace quest::vehicle { struct ToNodeParams; }

namespace quest
{
struct VehicleCommandParams : quest::AICommandParams
{
    static constexpr const char* NAME = "questVehicleCommandParams";
    static constexpr const char* ALIAS = NAME;

    quest::VehicleCommandType type; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
    Handle<quest::vehicle::OnSplineParams> additionalParamsOnSpline; // 48
    Handle<quest::vehicle::FollowParams> additionalParamsFollow; // 58
    Handle<quest::vehicle::ToNodeParams> additionalParamsToNode; // 68
    Handle<quest::vehicle::RacingParams> additionalParamsRacing; // 78
    Handle<quest::vehicle::JoinTrafficParams> additionalParamsJoinTraffic; // 88
    Handle<quest::vehicle::PanicParams> additionalParamsPanic; // 98
    Handle<quest::vehicle::ChaseParams> additionalParamsChase; // A8
};
RED4EXT_ASSERT_SIZE(VehicleCommandParams, 0xB8);
} // namespace quest
using questVehicleCommandParams = quest::VehicleCommandParams;
} // namespace RED4ext

// clang-format on
