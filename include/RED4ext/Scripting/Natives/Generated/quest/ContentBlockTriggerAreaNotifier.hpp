#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotifer.hpp>

namespace RED4ext
{
namespace quest
{
struct ContentBlockTriggerAreaNotifier : world::ITriggerAreaNotifer
{
    static constexpr const char* NAME = "questContentBlockTriggerAreaNotifier";
    static constexpr const char* ALIAS = NAME;

    bool resetTokenSpawnTimer; // B8
    uint8_t unkB9[0xC0 - 0xB9]; // B9
};
RED4EXT_ASSERT_SIZE(ContentBlockTriggerAreaNotifier, 0xC0);
} // namespace quest
using questContentBlockTriggerAreaNotifier = quest::ContentBlockTriggerAreaNotifier;
} // namespace RED4ext

// clang-format on
