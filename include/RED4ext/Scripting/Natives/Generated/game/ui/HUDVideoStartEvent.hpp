#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>

namespace RED4ext
{
namespace game::ui { 
struct HUDVideoStartEvent
{
    static constexpr const char* NAME = "gameuiHUDVideoStartEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    uint64_t videoPathHash; // 08
    uint8_t unk10[0x1A - 0x10]; // 10
    bool fullScreen; // 1A
    uint8_t unk1B[0x1C - 0x1B]; // 1B
    Vector2 position; // 1C
    Vector2 size; // 24
    bool skippable; // 2C
    bool isLooped; // 2D
    bool forceVideoFrameRate; // 2E
    bool playOnHud; // 2F
    uint8_t unk30[0x70 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(HUDVideoStartEvent, 0x70);
} // namespace game::ui
} // namespace RED4ext
