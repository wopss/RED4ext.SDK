#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/IComponentState.hpp>

namespace RED4ext
{
namespace game
{
struct FPPCameraComponentReplicatedState : net::IComponentState
{
    static constexpr const char* NAME = "gameFPPCameraComponentReplicatedState";
    static constexpr const char* ALIAS = NAME;

    float lookAtData_m_pitchInput; // 20 -- lookAtData.m_pitchInput
    float lookAtData_m_pitchRef; // 24 -- lookAtData.m_pitchRef
    float lookAtData_m_yawInput; // 28 -- lookAtData.m_yawInput
    float lookAtData_m_yawRef; // 2C -- lookAtData.m_yawRef
};
RED4EXT_ASSERT_SIZE(FPPCameraComponentReplicatedState, 0x30);
} // namespace game
using gameFPPCameraComponentReplicatedState = game::FPPCameraComponentReplicatedState;
} // namespace RED4ext

// clang-format on
