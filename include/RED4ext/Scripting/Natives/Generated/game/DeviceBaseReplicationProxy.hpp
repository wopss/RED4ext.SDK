#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/EulerAngles.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/IEntityState.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/Time.hpp>

namespace RED4ext
{
namespace game { struct DeviceReplicatedState; }

namespace game
{
struct DeviceBaseReplicationProxy : net::IEntityState
{
    static constexpr const char* NAME = "gameDeviceBaseReplicationProxy";
    static constexpr const char* ALIAS = NAME;

    Handle<game::DeviceReplicatedState> scriptState; // 50
    uint32_t versionId; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
    net::Time versionTimestamp; // 68
    EulerAngles initialOrientation; // 70
    Vector3 initialLocation; // 7C
};
RED4EXT_ASSERT_SIZE(DeviceBaseReplicationProxy, 0x88);
} // namespace game
using gameDeviceBaseReplicationProxy = game::DeviceBaseReplicationProxy;
} // namespace RED4ext

// clang-format on
