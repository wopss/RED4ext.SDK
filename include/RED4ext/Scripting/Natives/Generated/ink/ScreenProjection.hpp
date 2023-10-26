#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>

namespace RED4ext
{
namespace ink
{
struct __declspec(align(0x10)) ScreenProjection : IScriptable
{
    static constexpr const char* NAME = "inkScreenProjection";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x104 - 0x40]; // 40
    float distanceToCamera; // 104
    Vector2 previousPosition; // 108
    Vector2 currentPosition; // 110
    Vector2 uvPosition; // 118
};
RED4EXT_ASSERT_SIZE(ScreenProjection, 0x120);
} // namespace ink
using inkScreenProjection = ink::ScreenProjection;
} // namespace RED4ext

// clang-format on
