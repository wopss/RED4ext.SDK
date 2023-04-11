#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/AppearanceStatus.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct AppearanceStatusEvent : red::Event
{
    static constexpr const char* NAME = "entAppearanceStatusEvent";
    static constexpr const char* ALIAS = NAME;

    ent::AppearanceStatus status; // 40
    uint8_t unk41[0x50 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(AppearanceStatusEvent, 0x50);
} // namespace ent
using entAppearanceStatusEvent = ent::AppearanceStatusEvent;
} // namespace RED4ext

// clang-format on
