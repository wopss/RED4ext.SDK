#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui { 
struct PhotoModeRegisaterCallbacksEvent : red::Event
{
    static constexpr const char* NAME = "gameuiPhotoModeRegisaterCallbacksEvent";
    static constexpr const char* ALIAS = "PhotoModeRegisaterCallbacksEvent";

    uint8_t unk40[0x1C0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(PhotoModeRegisaterCallbacksEvent, 0x1C0);
} // namespace game::ui
using PhotoModeRegisaterCallbacksEvent = game::ui::PhotoModeRegisaterCallbacksEvent;
} // namespace RED4ext
