#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IStatsListener.hpp>

namespace RED4ext
{
namespace game
{
struct StatPoolDataModifierStatListener : game::IStatsListener
{
    static constexpr const char* NAME = "gameStatPoolDataModifierStatListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x70 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(StatPoolDataModifierStatListener, 0x70);
} // namespace game
using gameStatPoolDataModifierStatListener = game::StatPoolDataModifierStatListener;
} // namespace RED4ext

// clang-format on
