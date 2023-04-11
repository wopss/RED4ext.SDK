#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ShapeData.hpp>

namespace RED4ext
{
namespace game
{
struct QueryResult
{
    static constexpr const char* NAME = "gameQueryResult";
    static constexpr const char* ALIAS = "HitRepresentationQueryResult";

    DynArray<game::ShapeData> hitShapes; // 00
};
RED4EXT_ASSERT_SIZE(QueryResult, 0x10);
} // namespace game
using gameQueryResult = game::QueryResult;
using HitRepresentationQueryResult = game::QueryResult;
} // namespace RED4ext

// clang-format on
