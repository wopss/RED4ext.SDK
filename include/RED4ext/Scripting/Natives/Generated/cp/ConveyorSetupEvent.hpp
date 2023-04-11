#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace cp
{
struct ConveyorSetupEvent : red::Event
{
    static constexpr const char* NAME = "cpConveyorSetupEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x90 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ConveyorSetupEvent, 0x90);
} // namespace cp
using cpConveyorSetupEvent = cp::ConveyorSetupEvent;
} // namespace RED4ext

// clang-format on
