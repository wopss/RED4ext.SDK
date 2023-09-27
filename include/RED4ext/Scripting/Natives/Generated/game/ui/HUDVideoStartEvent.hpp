#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>

namespace RED4ext
{
namespace game::ui
{
struct HUDVideoStartEvent
{
    static constexpr const char* NAME = "gameuiHUDVideoStartEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    uint64_t videoPathHash; // 08
    uint8_t unk10[0x1A - 0x10]; // 10
    bool fullScreen; // 1A
    bool useFullscreenVideoState; // 1B
    bool keepWidescreenAspectRatio; // 1C
    uint8_t unk1D[0x20 - 0x1D]; // 1D
    Vector2 position; // 20
    Vector2 size; // 28
    bool skippable; // 30
    bool isLooped; // 31
    bool forceVideoFrameRate; // 32
    bool playOnHud; // 33
    uint8_t unk34[0x78 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(HUDVideoStartEvent, 0x78);
} // namespace game::ui
using gameuiHUDVideoStartEvent = game::ui::HUDVideoStartEvent;
} // namespace RED4ext

// clang-format on
