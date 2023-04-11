#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace AI
{
struct SignalHandlerComponent : ent::IComponent
{
    static constexpr const char* NAME = "AISignalHandlerComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0xE0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(SignalHandlerComponent, 0xE0);
} // namespace AI
using AISignalHandlerComponent = AI::SignalHandlerComponent;
} // namespace RED4ext

// clang-format on
