#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/UserData.hpp>

namespace RED4ext
{
namespace game
{
struct CursorInterpolationOverrides : ink::UserData
{
    static constexpr const char* NAME = "gameCursorInterpolationOverrides";
    static constexpr const char* ALIAS = NAME;

    Vector2 minSpeed; // 40
    float enterTime; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(CursorInterpolationOverrides, 0x50);
} // namespace game
using gameCursorInterpolationOverrides = game::CursorInterpolationOverrides;
} // namespace RED4ext

// clang-format on
