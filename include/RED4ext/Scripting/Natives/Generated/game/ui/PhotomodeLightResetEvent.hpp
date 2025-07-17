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
struct PhotomodeLightResetEvent : red::Event
{
    static constexpr const char* NAME = "gameuiPhotomodeLightResetEvent";
    static constexpr const char* ALIAS = "PhotomodeLightResetEvent";

};
RED4EXT_ASSERT_SIZE(PhotomodeLightResetEvent, 0x40);
} // namespace game::ui
using gameuiPhotomodeLightResetEvent = game::ui::PhotomodeLightResetEvent;
using PhotomodeLightResetEvent = game::ui::PhotomodeLightResetEvent;
} // namespace RED4ext

// clang-format on
