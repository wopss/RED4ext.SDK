#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatsObjectID.hpp>

namespace RED4ext
{
namespace game
{
struct PrereqParams
{
    static constexpr const char* NAME = "gamePrereqParams";
    static constexpr const char* ALIAS = "PrereqParams";

    game::StatsObjectID objectID; // 00
    game::StatsObjectID otherObjectID; // 10
    Variant otherData; // 20
};
RED4EXT_ASSERT_SIZE(PrereqParams, 0x38);
} // namespace game
using gamePrereqParams = game::PrereqParams;
using PrereqParams = game::PrereqParams;
} // namespace RED4ext

// clang-format on
