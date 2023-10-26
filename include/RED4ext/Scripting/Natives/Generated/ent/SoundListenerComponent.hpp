#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) SoundListenerComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "entSoundListenerComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk120[0x130 - 0x120]; // 120
};
RED4EXT_ASSERT_SIZE(SoundListenerComponent, 0x130);
} // namespace ent
using entSoundListenerComponent = ent::SoundListenerComponent;
} // namespace RED4ext

// clang-format on
