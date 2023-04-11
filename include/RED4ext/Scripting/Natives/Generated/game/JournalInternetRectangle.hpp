#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalInternetBase.hpp>

namespace RED4ext
{
namespace game
{
struct JournalInternetRectangle : game::JournalInternetBase
{
    static constexpr const char* NAME = "gameJournalInternetRectangle";
    static constexpr const char* ALIAS = "JournalInternetRectangle";

};
RED4EXT_ASSERT_SIZE(JournalInternetRectangle, 0x70);
} // namespace game
using gameJournalInternetRectangle = game::JournalInternetRectangle;
using JournalInternetRectangle = game::JournalInternetRectangle;
} // namespace RED4ext

// clang-format on
