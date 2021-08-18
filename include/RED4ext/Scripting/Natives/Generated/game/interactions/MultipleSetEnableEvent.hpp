#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::interactions { 
struct MultipleSetEnableEvent : red::Event
{
    static constexpr const char* NAME = "gameinteractionsMultipleSetEnableEvent";
    static constexpr const char* ALIAS = "InteractionMultipleSetEnableEvent";

    StaticArray<bool, 4> enable; // 40
    alignas(8) StaticArray<CName, 4> layer; // 48
    alignas(8) StaticArray<CName, 4> linkedLayers; // 70
};
RED4EXT_ASSERT_SIZE(MultipleSetEnableEvent, 0x98);
} // namespace game::interactions
using InteractionMultipleSetEnableEvent = game::interactions::MultipleSetEnableEvent;
} // namespace RED4ext
