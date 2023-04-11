#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::data { struct CPOLoadoutBase_Record; }

namespace game::events
{
struct MuppetUseLoadoutEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsMuppetUseLoadoutEvent";
    static constexpr const char* ALIAS = NAME;

    Handle<game::data::CPOLoadoutBase_Record> adout; // 40
};
RED4EXT_ASSERT_SIZE(MuppetUseLoadoutEvent, 0x50);
} // namespace game::events
using gameeventsMuppetUseLoadoutEvent = game::events::MuppetUseLoadoutEvent;
} // namespace RED4ext

// clang-format on
