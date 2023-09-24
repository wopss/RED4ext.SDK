#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct SetCasinoChipsAmountEvent : red::Event
{
    static constexpr const char* NAME = "gameuiSetCasinoChipsAmountEvent";
    static constexpr const char* ALIAS = "SetCasinoChipsAmountEvent";

    uint32_t value; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(SetCasinoChipsAmountEvent, 0x48);
} // namespace game::ui
using gameuiSetCasinoChipsAmountEvent = game::ui::SetCasinoChipsAmountEvent;
using SetCasinoChipsAmountEvent = game::ui::SetCasinoChipsAmountEvent;
} // namespace RED4ext

// clang-format on
