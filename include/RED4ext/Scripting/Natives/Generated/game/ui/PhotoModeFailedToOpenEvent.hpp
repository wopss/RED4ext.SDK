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
struct PhotoModeFailedToOpenEvent : red::Event
{
    static constexpr const char* NAME = "gameuiPhotoModeFailedToOpenEvent";
    static constexpr const char* ALIAS = "PhotoModeFailedToOpenEvent";

};
RED4EXT_ASSERT_SIZE(PhotoModeFailedToOpenEvent, 0x40);
} // namespace game::ui
using gameuiPhotoModeFailedToOpenEvent = game::ui::PhotoModeFailedToOpenEvent;
using PhotoModeFailedToOpenEvent = game::ui::PhotoModeFailedToOpenEvent;
} // namespace RED4ext

// clang-format on
