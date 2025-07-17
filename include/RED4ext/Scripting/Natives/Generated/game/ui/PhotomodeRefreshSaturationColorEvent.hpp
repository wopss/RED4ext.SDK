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
struct PhotomodeRefreshSaturationColorEvent : red::Event
{
    static constexpr const char* NAME = "gameuiPhotomodeRefreshSaturationColorEvent";
    static constexpr const char* ALIAS = "PhotomodeRefreshSaturationColorEvent";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(PhotomodeRefreshSaturationColorEvent, 0x48);
} // namespace game::ui
using gameuiPhotomodeRefreshSaturationColorEvent = game::ui::PhotomodeRefreshSaturationColorEvent;
using PhotomodeRefreshSaturationColorEvent = game::ui::PhotomodeRefreshSaturationColorEvent;
} // namespace RED4ext

// clang-format on
