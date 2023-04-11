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
struct MiscAICommandNodeParams : quest::AICommandParams
{
    static constexpr const char* NAME = "questMiscAICommandNodeParams";
    static constexpr const char* ALIAS = "MiscAICommandNodeParams";

};
RED4EXT_ASSERT_SIZE(MiscAICommandNodeParams, 0x40);
} // namespace quest
using questMiscAICommandNodeParams = quest::MiscAICommandNodeParams;
using MiscAICommandNodeParams = quest::MiscAICommandNodeParams;
} // namespace RED4ext

// clang-format on
