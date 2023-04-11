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
struct DeleteInputGroupEvent : red::Event
{
    static constexpr const char* NAME = "gameuiDeleteInputGroupEvent";
    static constexpr const char* ALIAS = "DeleteInputGroupEvent";

    CName groupId; // 40
    CName targetHintContainer; // 48
};
RED4EXT_ASSERT_SIZE(DeleteInputGroupEvent, 0x50);
} // namespace game::ui
using gameuiDeleteInputGroupEvent = game::ui::DeleteInputGroupEvent;
using DeleteInputGroupEvent = game::ui::DeleteInputGroupEvent;
} // namespace RED4ext

// clang-format on
