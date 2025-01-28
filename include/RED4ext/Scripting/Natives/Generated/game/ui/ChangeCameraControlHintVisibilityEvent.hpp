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
struct ChangeCameraControlHintVisibilityEvent : red::Event
{
    static constexpr const char* NAME = "gameuiChangeCameraControlHintVisibilityEvent";
    static constexpr const char* ALIAS = "ChangeCameraControlHintVisibilityEvent";

    bool movementVisible; // 40
    bool rotationVisible; // 41
    uint8_t unk42[0x48 - 0x42]; // 42
};
RED4EXT_ASSERT_SIZE(ChangeCameraControlHintVisibilityEvent, 0x48);
} // namespace game::ui
using gameuiChangeCameraControlHintVisibilityEvent = game::ui::ChangeCameraControlHintVisibilityEvent;
using ChangeCameraControlHintVisibilityEvent = game::ui::ChangeCameraControlHintVisibilityEvent;
} // namespace RED4ext

// clang-format on
