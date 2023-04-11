#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct RequestStats : red::Event
{
    static constexpr const char* NAME = "gameRequestStats";
    static constexpr const char* ALIAS = "RequestStats";

};
RED4EXT_ASSERT_SIZE(RequestStats, 0x40);
} // namespace game
using gameRequestStats = game::RequestStats;
using RequestStats = game::RequestStats;
} // namespace RED4ext

// clang-format on
