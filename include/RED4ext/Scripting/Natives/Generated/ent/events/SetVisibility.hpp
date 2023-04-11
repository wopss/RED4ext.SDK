#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/VisibilityParamSource.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent::events
{
struct SetVisibility : red::Event
{
    static constexpr const char* NAME = "enteventsSetVisibility";
    static constexpr const char* ALIAS = NAME;

    bool visible; // 40
    ent::VisibilityParamSource source; // 41
    uint8_t unk42[0x50 - 0x42]; // 42
};
RED4EXT_ASSERT_SIZE(SetVisibility, 0x50);
} // namespace ent::events
using enteventsSetVisibility = ent::events::SetVisibility;
} // namespace RED4ext

// clang-format on
