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
struct DeleteInputHintBySourceEvent : red::Event
{
    static constexpr const char* NAME = "gameuiDeleteInputHintBySourceEvent";
    static constexpr const char* ALIAS = "DeleteInputHintBySourceEvent";

    CName source; // 40
    CName targetHintContainer; // 48
};
RED4EXT_ASSERT_SIZE(DeleteInputHintBySourceEvent, 0x50);
} // namespace game::ui
using gameuiDeleteInputHintBySourceEvent = game::ui::DeleteInputHintBySourceEvent;
using DeleteInputHintBySourceEvent = game::ui::DeleteInputHintBySourceEvent;
} // namespace RED4ext

// clang-format on
