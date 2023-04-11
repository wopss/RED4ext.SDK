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
struct SetPlaneSetting : red::Event
{
    static constexpr const char* NAME = "enteventsSetPlaneSetting";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(SetPlaneSetting, 0x50);
} // namespace ent::events
using enteventsSetPlaneSetting = ent::events::SetPlaneSetting;
} // namespace RED4ext

// clang-format on
