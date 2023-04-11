#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PuppetPreview_SetCameraSetupEvent : red::Event
{
    static constexpr const char* NAME = "gameuiPuppetPreview_SetCameraSetupEvent";
    static constexpr const char* ALIAS = NAME;

    uint32_t setupIndex; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    CName slotName; // 48
    bool delayed; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
};
RED4EXT_ASSERT_SIZE(PuppetPreview_SetCameraSetupEvent, 0x58);
} // namespace game::ui
using gameuiPuppetPreview_SetCameraSetupEvent = game::ui::PuppetPreview_SetCameraSetupEvent;
} // namespace RED4ext

// clang-format on
