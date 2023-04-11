#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>

namespace RED4ext
{
namespace game::ui
{
struct NarrationEvent
{
    static constexpr const char* NAME = "gameuiNarrationEvent";
    static constexpr const char* ALIAS = "NarrationEvent";

    CString text; // 00
    float durationSec; // 20
    Color color; // 24
};
RED4EXT_ASSERT_SIZE(NarrationEvent, 0x28);
} // namespace game::ui
using gameuiNarrationEvent = game::ui::NarrationEvent;
using NarrationEvent = game::ui::NarrationEvent;
} // namespace RED4ext

// clang-format on
