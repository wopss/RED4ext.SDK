#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IStatPoolsListener.hpp>

namespace RED4ext
{
namespace quest
{
struct QuestStatPoolListener : game::IStatPoolsListener
{
    static constexpr const char* NAME = "questQuestStatPoolListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x58 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(QuestStatPoolListener, 0x58);
} // namespace quest
using questQuestStatPoolListener = quest::QuestStatPoolListener;
} // namespace RED4ext

// clang-format on
