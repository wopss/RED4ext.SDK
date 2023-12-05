#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PlayerScriptableSystemRequest.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Achievement.hpp>

namespace RED4ext
{
namespace quest
{
struct SetAchievementProgressRequest : game::PlayerScriptableSystemRequest
{
    static constexpr const char* NAME = "questSetAchievementProgressRequest";
    static constexpr const char* ALIAS = "SetAchievementProgressRequest";

    int32_t currentValue; // 58
    int32_t customTarget; // 5C
    game::data::Achievement achievement; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(SetAchievementProgressRequest, 0x68);
} // namespace quest
using questSetAchievementProgressRequest = quest::SetAchievementProgressRequest;
using SetAchievementProgressRequest = quest::SetAchievementProgressRequest;
} // namespace RED4ext

// clang-format on
