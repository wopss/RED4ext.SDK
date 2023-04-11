#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ragdoll/ActivationRequestType.hpp>

namespace RED4ext
{
namespace ent::ragdoll
{
struct ActivationRequestData
{
    static constexpr const char* NAME = "entragdollActivationRequestData";
    static constexpr const char* ALIAS = "RagdollActivationRequestData";

    CName filterDataOverride; // 00
    ent::ragdoll::ActivationRequestType type; // 08
    float activationNoGroundThreshold; // 0C
    bool activateOnCollision; // 10
    bool applyPowerPose; // 11
    bool applyMomentum; // 12
    bool calculateEarlyPositionGroundHeight; // 13
    uint8_t unk14[0x20 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(ActivationRequestData, 0x20);
} // namespace ent::ragdoll
using entragdollActivationRequestData = ent::ragdoll::ActivationRequestData;
using RagdollActivationRequestData = ent::ragdoll::ActivationRequestData;
} // namespace RED4ext

// clang-format on
