#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotiferInstance.hpp>

namespace RED4ext
{
namespace quest
{
struct ContentBlockTriggerAreaNotifierInstance : world::ITriggerAreaNotiferInstance
{
    static constexpr const char* NAME = "questContentBlockTriggerAreaNotifierInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk58[0x70 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(ContentBlockTriggerAreaNotifierInstance, 0x70);
} // namespace quest
using questContentBlockTriggerAreaNotifierInstance = quest::ContentBlockTriggerAreaNotifierInstance;
} // namespace RED4ext

// clang-format on
