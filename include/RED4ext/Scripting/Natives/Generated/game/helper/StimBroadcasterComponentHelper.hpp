#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::helper
{
struct StimBroadcasterComponentHelper : IScriptable
{
    static constexpr const char* NAME = "gamehelperStimBroadcasterComponentHelper";
    static constexpr const char* ALIAS = "StimBroadcasterComponentHelper";

};
RED4EXT_ASSERT_SIZE(StimBroadcasterComponentHelper, 0x40);
} // namespace game::helper
using gamehelperStimBroadcasterComponentHelper = game::helper::StimBroadcasterComponentHelper;
using StimBroadcasterComponentHelper = game::helper::StimBroadcasterComponentHelper;
} // namespace RED4ext

// clang-format on
