#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/AppearanceStatus.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct ShadowMeshChangeEvent : red::Event
{
    static constexpr const char* NAME = "entShadowMeshChangeEvent";
    static constexpr const char* ALIAS = NAME;

    ent::AppearanceStatus requestedState; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(ShadowMeshChangeEvent, 0x48);
} // namespace ent
using entShadowMeshChangeEvent = ent::ShadowMeshChangeEvent;
} // namespace RED4ext

// clang-format on
