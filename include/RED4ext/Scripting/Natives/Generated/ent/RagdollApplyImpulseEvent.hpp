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
struct __declspec(align(0x10)) RagdollApplyImpulseEvent : red::Event
{
    static constexpr const char* NAME = "entRagdollApplyImpulseEvent";
    static constexpr const char* ALIAS = "RagdollApplyImpulseEvent";

    Vector4 worldImpulsePos; // 40
    Vector4 worldImpulseValue; // 50
    float influenceRadius; // 60
    uint8_t unk64[0x70 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(RagdollApplyImpulseEvent, 0x70);
} // namespace ent
using entRagdollApplyImpulseEvent = ent::RagdollApplyImpulseEvent;
using RagdollApplyImpulseEvent = ent::RagdollApplyImpulseEvent;
} // namespace RED4ext

// clang-format on
