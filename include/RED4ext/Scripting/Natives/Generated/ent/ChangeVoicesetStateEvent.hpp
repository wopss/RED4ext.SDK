#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/VoicesetInputToBlock.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct ChangeVoicesetStateEvent : red::Event
{
    static constexpr const char* NAME = "entChangeVoicesetStateEvent";
    static constexpr const char* ALIAS = NAME;

    bool enableVoicesetLines; // 40
    bool enableVoicesetGrunts; // 41
    uint8_t unk42[0x48 - 0x42]; // 42
    DynArray<ent::VoicesetInputToBlock> inputsToBlock; // 48
};
RED4EXT_ASSERT_SIZE(ChangeVoicesetStateEvent, 0x58);
} // namespace ent
using entChangeVoicesetStateEvent = ent::ChangeVoicesetStateEvent;
} // namespace RED4ext

// clang-format on
