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
struct PhotoModeUIInteractiveEvent : red::Event
{
    static constexpr const char* NAME = "gameuiPhotoModeUIInteractiveEvent";
    static constexpr const char* ALIAS = "PhotoModeUIInteractiveEvent";

    bool interactive; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(PhotoModeUIInteractiveEvent, 0x48);
} // namespace game::ui
using gameuiPhotoModeUIInteractiveEvent = game::ui::PhotoModeUIInteractiveEvent;
using PhotoModeUIInteractiveEvent = game::ui::PhotoModeUIInteractiveEvent;
} // namespace RED4ext

// clang-format on
