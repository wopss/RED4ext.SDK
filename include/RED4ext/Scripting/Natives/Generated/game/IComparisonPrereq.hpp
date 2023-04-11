#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ComparisonType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IPrereq.hpp>

namespace RED4ext
{
namespace game
{
struct IComparisonPrereq : game::IPrereq
{
    static constexpr const char* NAME = "gameIComparisonPrereq";
    static constexpr const char* ALIAS = "IComparisonPrereq";

    game::ComparisonType comparisonType; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(IComparisonPrereq, 0x48);
} // namespace game
using gameIComparisonPrereq = game::IComparisonPrereq;
using IComparisonPrereq = game::IComparisonPrereq;
} // namespace RED4ext

// clang-format on
