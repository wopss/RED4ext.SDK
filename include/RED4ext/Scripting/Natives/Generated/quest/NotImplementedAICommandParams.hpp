#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AICommandParams.hpp>

namespace RED4ext
{
namespace quest
{
struct NotImplementedAICommandParams : quest::AICommandParams
{
    static constexpr const char* NAME = "questNotImplementedAICommandParams";
    static constexpr const char* ALIAS = "NotImplementedAICommandParams";

};
RED4EXT_ASSERT_SIZE(NotImplementedAICommandParams, 0x40);
} // namespace quest
using questNotImplementedAICommandParams = quest::NotImplementedAICommandParams;
using NotImplementedAICommandParams = quest::NotImplementedAICommandParams;
} // namespace RED4ext

// clang-format on
