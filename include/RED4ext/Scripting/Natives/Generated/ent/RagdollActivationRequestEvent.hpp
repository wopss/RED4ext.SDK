#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ragdoll/ActivationRequestData.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct RagdollActivationRequestEvent : red::Event
{
    static constexpr const char* NAME = "entRagdollActivationRequestEvent";
    static constexpr const char* ALIAS = "RagdollActivationRequestEvent";

    ent::ragdoll::ActivationRequestData data; // 40
};
RED4EXT_ASSERT_SIZE(RagdollActivationRequestEvent, 0x60);
} // namespace ent
using entRagdollActivationRequestEvent = ent::RagdollActivationRequestEvent;
using RagdollActivationRequestEvent = ent::RagdollActivationRequestEvent;
} // namespace RED4ext

// clang-format on
