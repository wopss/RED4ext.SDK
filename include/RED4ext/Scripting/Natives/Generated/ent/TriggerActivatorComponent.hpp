#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/TriggerChannel.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) TriggerActivatorComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "entTriggerActivatorComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk120[0x128 - 0x120]; // 120
    float height; // 128
    float radius; // 12C
    TriggerChannel channels; // 130
    float maxContinousDistance; // 134
    bool enableCCD; // 138
    uint8_t unk139[0x150 - 0x139]; // 139
};
RED4EXT_ASSERT_SIZE(TriggerActivatorComponent, 0x150);
} // namespace ent
using entTriggerActivatorComponent = ent::TriggerActivatorComponent;
} // namespace RED4ext

// clang-format on
