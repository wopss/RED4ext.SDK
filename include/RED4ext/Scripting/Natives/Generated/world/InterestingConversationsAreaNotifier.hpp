#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotifer.hpp>

namespace RED4ext
{
namespace world
{
struct InterestingConversationsAreaNotifier : world::ITriggerAreaNotifer
{
    static constexpr const char* NAME = "worldInterestingConversationsAreaNotifier";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(InterestingConversationsAreaNotifier, 0xB8);
} // namespace world
using worldInterestingConversationsAreaNotifier = world::InterestingConversationsAreaNotifier;
} // namespace RED4ext

// clang-format on
