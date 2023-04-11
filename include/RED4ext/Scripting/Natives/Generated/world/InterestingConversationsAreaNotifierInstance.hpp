#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotiferInstance.hpp>

namespace RED4ext
{
namespace world
{
struct InterestingConversationsAreaNotifierInstance : world::ITriggerAreaNotiferInstance
{
    static constexpr const char* NAME = "worldInterestingConversationsAreaNotifierInstance";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(InterestingConversationsAreaNotifierInstance, 0x58);
} // namespace world
using worldInterestingConversationsAreaNotifierInstance = world::InterestingConversationsAreaNotifierInstance;
} // namespace RED4ext

// clang-format on
