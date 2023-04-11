#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/BumpIntensity.hpp>

namespace RED4ext
{
namespace game::influence
{
struct BumpReactionSetting : ISerializable
{
    static constexpr const char* NAME = "gameinfluenceBumpReactionSetting";
    static constexpr const char* ALIAS = "BumpReactionSetting";

    game::interactions::BumpIntensity reaction; // 30
    float maxVelocity; // 34
};
RED4EXT_ASSERT_SIZE(BumpReactionSetting, 0x38);
} // namespace game::influence
using gameinfluenceBumpReactionSetting = game::influence::BumpReactionSetting;
using BumpReactionSetting = game::influence::BumpReactionSetting;
} // namespace RED4ext

// clang-format on
