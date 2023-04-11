#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LayerDefinition.hpp>

namespace RED4ext
{
namespace ink
{
struct WaitingSignLayerDefinition : ink::LayerDefinition
{
    static constexpr const char* NAME = "inkWaitingSignLayerDefinition";
    static constexpr const char* ALIAS = NAME;

    CName introAnimName; // 38
    CName waitingAnimName; // 40
    CName outroAnimName; // 48
    float delayTime; // 50
    float introTime; // 54
    float waitingTime; // 58
    float postWaitTime; // 5C
    float outroTime; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(WaitingSignLayerDefinition, 0x68);
} // namespace ink
using inkWaitingSignLayerDefinition = ink::WaitingSignLayerDefinition;
} // namespace RED4ext

// clang-format on
