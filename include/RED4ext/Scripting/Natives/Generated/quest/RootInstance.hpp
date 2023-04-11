#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PhaseInstance.hpp>

namespace RED4ext
{
namespace quest
{
struct RootInstance : quest::PhaseInstance
{
    static constexpr const char* NAME = "questRootInstance";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(RootInstance, 0x110);
} // namespace quest
using questRootInstance = quest::RootInstance;
} // namespace RED4ext

// clang-format on
