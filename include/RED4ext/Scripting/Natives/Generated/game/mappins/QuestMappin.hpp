#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/IMappin.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct QuestMappin : game::mappins::IMappin
{
    static constexpr const char* NAME = "gamemappinsQuestMappin";
    static constexpr const char* ALIAS = "QuestMappin";

    uint8_t unk88[0x128 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(QuestMappin, 0x128);
} // namespace game::mappins
using gamemappinsQuestMappin = game::mappins::QuestMappin;
using QuestMappin = game::mappins::QuestMappin;
} // namespace RED4ext

// clang-format on
