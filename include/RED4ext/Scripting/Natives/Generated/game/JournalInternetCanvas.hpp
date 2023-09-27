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
struct JournalInternetCanvas : game::JournalInternetBase
{
    static constexpr const char* NAME = "gameJournalInternetCanvas";
    static constexpr const char* ALIAS = "JournalInternetCanvas";

    bool isHidden; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
};
RED4EXT_ASSERT_SIZE(JournalInternetCanvas, 0x78);
} // namespace game
using gameJournalInternetCanvas = game::JournalInternetCanvas;
using JournalInternetCanvas = game::JournalInternetCanvas;
} // namespace RED4ext

// clang-format on
