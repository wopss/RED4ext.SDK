#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/ent/ragdoll/ActivationRequestType.hpp>

namespace RED4ext
{
namespace ent::ragdoll { 
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
    uint8_t unk13[0x18 - 0x13]; // 13
};
RED4EXT_ASSERT_SIZE(ActivationRequestData, 0x18);
} // namespace ent::ragdoll
using RagdollActivationRequestData = ent::ragdoll::ActivationRequestData;
} // namespace RED4ext
