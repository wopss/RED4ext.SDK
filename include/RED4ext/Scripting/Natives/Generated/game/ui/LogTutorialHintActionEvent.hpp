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
struct LogTutorialHintActionEvent : red::Event
{
    static constexpr const char* NAME = "gameuiLogTutorialHintActionEvent";
    static constexpr const char* ALIAS = "LogTutorialHintActionEvent";

    CName actionName; // 40
};
RED4EXT_ASSERT_SIZE(LogTutorialHintActionEvent, 0x48);
} // namespace game::ui
using gameuiLogTutorialHintActionEvent = game::ui::LogTutorialHintActionEvent;
using LogTutorialHintActionEvent = game::ui::LogTutorialHintActionEvent;
} // namespace RED4ext

// clang-format on
