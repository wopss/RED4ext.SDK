#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/QueryResult.hpp>

namespace RED4ext
{
namespace game
{
struct HitRepresentationResult
{
    static constexpr const char* NAME = "gameHitRepresentationResult";
    static constexpr const char* ALIAS = NAME;

    game::QueryResult sult; // 00
    ent::EntityID tityID; // 10
};
RED4EXT_ASSERT_SIZE(HitRepresentationResult, 0x18);
} // namespace game
using gameHitRepresentationResult = game::HitRepresentationResult;
} // namespace RED4ext

// clang-format on
