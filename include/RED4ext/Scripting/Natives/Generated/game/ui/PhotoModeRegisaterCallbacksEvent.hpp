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
struct PhotoModeRegisaterCallbacksEvent : red::Event
{
    static constexpr const char* NAME = "gameuiPhotoModeRegisaterCallbacksEvent";
    static constexpr const char* ALIAS = "PhotoModeRegisaterCallbacksEvent";

    uint8_t unk40[0x200 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(PhotoModeRegisaterCallbacksEvent, 0x200);
} // namespace game::ui
using gameuiPhotoModeRegisaterCallbacksEvent = game::ui::PhotoModeRegisaterCallbacksEvent;
using PhotoModeRegisaterCallbacksEvent = game::ui::PhotoModeRegisaterCallbacksEvent;
} // namespace RED4ext

// clang-format on
