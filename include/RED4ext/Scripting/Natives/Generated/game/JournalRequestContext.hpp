#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalRequestClassFilter.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalRequestStateFilter.hpp>

namespace RED4ext
{
namespace game
{
struct JournalRequestContext
{
    static constexpr const char* NAME = "gameJournalRequestContext";
    static constexpr const char* ALIAS = "JournalRequestContext";

    game::JournalRequestStateFilter stateFilter; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    game::JournalRequestClassFilter classFilter; // 08
    uint8_t unk10[0x20 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(JournalRequestContext, 0x20);
} // namespace game
using gameJournalRequestContext = game::JournalRequestContext;
using JournalRequestContext = game::JournalRequestContext;
} // namespace RED4ext

// clang-format on
