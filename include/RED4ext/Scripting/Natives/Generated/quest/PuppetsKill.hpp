#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PuppetsEffector.hpp>

namespace RED4ext
{
namespace quest
{
struct PuppetsKill : quest::PuppetsEffector
{
    static constexpr const char* NAME = "questPuppetsKill";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PuppetsKill, 0x30);
} // namespace quest
using questPuppetsKill = quest::PuppetsKill;
} // namespace RED4ext

// clang-format on
