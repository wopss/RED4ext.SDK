#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct FocusClueStateChangeEvent : red::Event
{
    static constexpr const char* NAME = "gameFocusClueStateChangeEvent";
    static constexpr const char* ALIAS = "FocusClueStateChangeEvent";

    int32_t clueIndex; // 40
    bool isEnabled; // 44
    uint8_t unk45[0x48 - 0x45]; // 45
};
RED4EXT_ASSERT_SIZE(FocusClueStateChangeEvent, 0x48);
} // namespace game
using gameFocusClueStateChangeEvent = game::FocusClueStateChangeEvent;
using FocusClueStateChangeEvent = game::FocusClueStateChangeEvent;
} // namespace RED4ext

// clang-format on
