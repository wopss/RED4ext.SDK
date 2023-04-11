#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CompiledCoverData.hpp>

namespace RED4ext
{
namespace game
{
struct CompiledShootingSpotData : game::CompiledCoverData
{
    static constexpr const char* NAME = "gameCompiledShootingSpotData";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CompiledShootingSpotData, 0x60);
} // namespace game
using gameCompiledShootingSpotData = game::CompiledShootingSpotData;
} // namespace RED4ext

// clang-format on
