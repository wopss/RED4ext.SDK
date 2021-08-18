#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>

namespace RED4ext
{
namespace ink { 
struct ScreenProjection : IScriptable
{
    static constexpr const char* NAME = "inkScreenProjection";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0xF4 - 0x40]; // 40
    float distanceToCamera; // F4
    Vector2 previousPosition; // F8
    Vector2 currentPosition; // 100
    Vector2 uvPosition; // 108
};
RED4EXT_ASSERT_SIZE(ScreenProjection, 0x110);
} // namespace ink
} // namespace RED4ext
