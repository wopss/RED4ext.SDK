#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct SetEnableEvent : red::Event
{
    static constexpr const char* NAME = "gameinteractionsSetEnableEvent";
    static constexpr const char* ALIAS = "InteractionSetEnableEvent";

    bool enable; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
    CName linkedLayers; // 48
    CName layer; // 50
};
RED4EXT_ASSERT_SIZE(SetEnableEvent, 0x58);
} // namespace game::interactions
using gameinteractionsSetEnableEvent = game::interactions::SetEnableEvent;
using InteractionSetEnableEvent = game::interactions::SetEnableEvent;
} // namespace RED4ext

// clang-format on
