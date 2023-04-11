#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/HitRepresentationResult.hpp>

namespace RED4ext
{
namespace game
{
struct HitRepresentationResults
{
    static constexpr const char* NAME = "gameHitRepresentationResults";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::HitRepresentationResult> sults; // 00
};
RED4EXT_ASSERT_SIZE(HitRepresentationResults, 0x10);
} // namespace game
using gameHitRepresentationResults = game::HitRepresentationResults;
} // namespace RED4ext

// clang-format on
