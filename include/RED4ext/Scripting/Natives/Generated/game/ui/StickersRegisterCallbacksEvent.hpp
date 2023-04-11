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
struct StickersRegisterCallbacksEvent : red::Event
{
    static constexpr const char* NAME = "gameuiStickersRegisterCallbacksEvent";
    static constexpr const char* ALIAS = "StickersRegisterCallbacksEvent";

    uint8_t unk40[0xC0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(StickersRegisterCallbacksEvent, 0xC0);
} // namespace game::ui
using gameuiStickersRegisterCallbacksEvent = game::ui::StickersRegisterCallbacksEvent;
using StickersRegisterCallbacksEvent = game::ui::StickersRegisterCallbacksEvent;
} // namespace RED4ext

// clang-format on
