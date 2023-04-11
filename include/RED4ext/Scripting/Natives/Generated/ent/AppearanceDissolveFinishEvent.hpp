#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct AppearanceDissolveFinishEvent : red::Event
{
    static constexpr const char* NAME = "entAppearanceDissolveFinishEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(AppearanceDissolveFinishEvent, 0x48);
} // namespace ent
using entAppearanceDissolveFinishEvent = ent::AppearanceDissolveFinishEvent;
} // namespace RED4ext

// clang-format on
