#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ISpatialQueriesSystem.hpp>

namespace RED4ext
{
namespace game
{
struct SpatialQueriesSystem : game::ISpatialQueriesSystem
{
    static constexpr const char* NAME = "gameSpatialQueriesSystem";
    static constexpr const char* ALIAS = "SpatialQueriesSystem";

    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(SpatialQueriesSystem, 0x78);
} // namespace game
using gameSpatialQueriesSystem = game::SpatialQueriesSystem;
using SpatialQueriesSystem = game::SpatialQueriesSystem;
} // namespace RED4ext

// clang-format on
