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
struct PhotomodeSetActiveLightEvent : red::Event
{
    static constexpr const char* NAME = "gameuiPhotomodeSetActiveLightEvent";
    static constexpr const char* ALIAS = "PhotomodeSetActiveLightEvent";

    bool isLightTabActive; // 40
    bool isCurrentLightEnabled; // 41
    uint8_t unk42[0x44 - 0x42]; // 42
    int32_t lightIndex; // 44
};
RED4EXT_ASSERT_SIZE(PhotomodeSetActiveLightEvent, 0x48);
} // namespace game::ui
using gameuiPhotomodeSetActiveLightEvent = game::ui::PhotomodeSetActiveLightEvent;
using PhotomodeSetActiveLightEvent = game::ui::PhotomodeSetActiveLightEvent;
} // namespace RED4ext

// clang-format on
