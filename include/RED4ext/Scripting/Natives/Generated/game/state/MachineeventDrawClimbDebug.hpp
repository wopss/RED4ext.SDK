#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineeventDrawClimbDebug : red::Event
{
    static constexpr const char* NAME = "gamestateMachineeventDrawClimbDebug";
    static constexpr const char* ALIAS = "DrawClimbDebug";

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(MachineeventDrawClimbDebug, 0x50);
} // namespace game::state
using gamestateMachineeventDrawClimbDebug = game::state::MachineeventDrawClimbDebug;
using DrawClimbDebug = game::state::MachineeventDrawClimbDebug;
} // namespace RED4ext

// clang-format on
