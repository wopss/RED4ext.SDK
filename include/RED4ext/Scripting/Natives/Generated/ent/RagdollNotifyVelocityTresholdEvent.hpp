#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) RagdollNotifyVelocityTresholdEvent : red::Event
{
    static constexpr const char* NAME = "entRagdollNotifyVelocityTresholdEvent";
    static constexpr const char* ALIAS = "RagdollNotifyVelocityTresholdEvent";

    Vector4 velocity; // 40
};
RED4EXT_ASSERT_SIZE(RagdollNotifyVelocityTresholdEvent, 0x50);
} // namespace ent
using entRagdollNotifyVelocityTresholdEvent = ent::RagdollNotifyVelocityTresholdEvent;
using RagdollNotifyVelocityTresholdEvent = ent::RagdollNotifyVelocityTresholdEvent;
} // namespace RED4ext

// clang-format on
