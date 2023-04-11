#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/AICommandFactory.hpp>

namespace RED4ext
{
namespace quest
{
struct AICommandParams : scn::AICommandFactory
{
    static constexpr const char* NAME = "questAICommandParams";
    static constexpr const char* ALIAS = "AICommandParams";

};
RED4EXT_ASSERT_SIZE(AICommandParams, 0x40);
} // namespace quest
using questAICommandParams = quest::AICommandParams;
using AICommandParams = quest::AICommandParams;
} // namespace RED4ext

// clang-format on
