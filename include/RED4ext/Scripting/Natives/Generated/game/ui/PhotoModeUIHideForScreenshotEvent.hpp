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
struct PhotoModeUIHideForScreenshotEvent : red::Event
{
    static constexpr const char* NAME = "gameuiPhotoModeUIHideForScreenshotEvent";
    static constexpr const char* ALIAS = "PhotoModeUIHideForScreenshotEvent";

    bool hide; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(PhotoModeUIHideForScreenshotEvent, 0x48);
} // namespace game::ui
using gameuiPhotoModeUIHideForScreenshotEvent = game::ui::PhotoModeUIHideForScreenshotEvent;
using PhotoModeUIHideForScreenshotEvent = game::ui::PhotoModeUIHideForScreenshotEvent;
} // namespace RED4ext

// clang-format on
