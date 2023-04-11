#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events
{
struct RefreshVisibility : red::Event
{
    static constexpr const char* NAME = "gameeventsRefreshVisibility";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(RefreshVisibility, 0x40);
} // namespace game::events
using gameeventsRefreshVisibility = game::events::RefreshVisibility;
} // namespace RED4ext

// clang-format on
