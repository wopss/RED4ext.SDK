#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AICommandParams.hpp>

namespace RED4ext
{
namespace AI { struct Command; }

namespace quest
{
struct ConstAICommandParams : quest::AICommandParams
{
    static constexpr const char* NAME = "questConstAICommandParams";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::Command> command; // 40
};
RED4EXT_ASSERT_SIZE(ConstAICommandParams, 0x50);
} // namespace quest
using questConstAICommandParams = quest::ConstAICommandParams;
} // namespace RED4ext

// clang-format on
