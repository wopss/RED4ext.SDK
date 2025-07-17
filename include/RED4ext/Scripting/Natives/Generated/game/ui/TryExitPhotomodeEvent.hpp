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
struct TryExitPhotomodeEvent : red::Event
{
    static constexpr const char* NAME = "gameuiTryExitPhotomodeEvent";
    static constexpr const char* ALIAS = "TryExitPhotomodeEvent";

};
RED4EXT_ASSERT_SIZE(TryExitPhotomodeEvent, 0x40);
} // namespace game::ui
using gameuiTryExitPhotomodeEvent = game::ui::TryExitPhotomodeEvent;
using TryExitPhotomodeEvent = game::ui::TryExitPhotomodeEvent;
} // namespace RED4ext

// clang-format on
