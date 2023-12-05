#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent::events
{
struct ToggleImpulseDestruction : red::Event
{
    static constexpr const char* NAME = "enteventsToggleImpulseDestruction";
    static constexpr const char* ALIAS = "ToggleImpulseDestruction";

    bool enable; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(ToggleImpulseDestruction, 0x48);
} // namespace ent::events
using enteventsToggleImpulseDestruction = ent::events::ToggleImpulseDestruction;
using ToggleImpulseDestruction = ent::events::ToggleImpulseDestruction;
} // namespace RED4ext

// clang-format on
