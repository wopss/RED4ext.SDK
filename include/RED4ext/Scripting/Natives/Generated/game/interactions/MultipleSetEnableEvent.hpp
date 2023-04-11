#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct MultipleSetEnableEvent : red::Event
{
    static constexpr const char* NAME = "gameinteractionsMultipleSetEnableEvent";
    static constexpr const char* ALIAS = "InteractionMultipleSetEnableEvent";

    StaticArray<bool, 4> enable; // 40
#pragma warning(suppress : 4324)
    alignas(8) StaticArray<CName, 4> layer; // 48
#pragma warning(suppress : 4324)
    alignas(8) StaticArray<CName, 4> linkedLayers; // 70
};
RED4EXT_ASSERT_SIZE(MultipleSetEnableEvent, 0x98);
} // namespace game::interactions
using gameinteractionsMultipleSetEnableEvent = game::interactions::MultipleSetEnableEvent;
using InteractionMultipleSetEnableEvent = game::interactions::MultipleSetEnableEvent;
} // namespace RED4ext

// clang-format on
