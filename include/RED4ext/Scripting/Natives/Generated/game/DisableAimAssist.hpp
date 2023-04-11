#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct DisableAimAssist : red::Event
{
    static constexpr const char* NAME = "gameDisableAimAssist";
    static constexpr const char* ALIAS = "DisableAimAssist";

};
RED4EXT_ASSERT_SIZE(DisableAimAssist, 0x40);
} // namespace game
using gameDisableAimAssist = game::DisableAimAssist;
using DisableAimAssist = game::DisableAimAssist;
} // namespace RED4ext

// clang-format on
