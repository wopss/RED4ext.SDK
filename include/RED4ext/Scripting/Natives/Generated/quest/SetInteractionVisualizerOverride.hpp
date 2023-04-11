#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IInteractiveObjectManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetInteractionVisualizerOverride : quest::IInteractiveObjectManagerNodeType
{
    static constexpr const char* NAME = "questSetInteractionVisualizerOverride";
    static constexpr const char* ALIAS = NAME;

    NodeRef objectRef; // 30
    bool applyOverride; // 38
    bool removeAfterSingleUse; // 39
    uint8_t unk3A[0x40 - 0x3A]; // 3A
};
RED4EXT_ASSERT_SIZE(SetInteractionVisualizerOverride, 0x40);
} // namespace quest
using questSetInteractionVisualizerOverride = quest::SetInteractionVisualizerOverride;
} // namespace RED4ext

// clang-format on
