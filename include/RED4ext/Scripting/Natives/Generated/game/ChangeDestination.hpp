#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ActionInternalEvent.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) ChangeDestination : game::ActionInternalEvent
{
    static constexpr const char* NAME = "gameChangeDestination";
    static constexpr const char* ALIAS = NAME;

    Vector4 destination; // 40
};
RED4EXT_ASSERT_SIZE(ChangeDestination, 0x50);
} // namespace game
using gameChangeDestination = game::ChangeDestination;
} // namespace RED4ext

// clang-format on
