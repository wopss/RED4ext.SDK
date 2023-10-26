#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EAreaShape.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EAreaType.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) AreaData
{
    static constexpr const char* NAME = "gameAreaData";
    static constexpr const char* ALIAS = NAME;

    Vector4 position; // 00
    float size; // 10
    game::EAreaType type; // 14
    game::EAreaShape shape; // 16
    CName name; // 18
    TweakDBID lootID; // 20
    uint32_t priority; // 28
    uint8_t unk2C[0x30 - 0x2C]; // 2C
};
RED4EXT_ASSERT_SIZE(AreaData, 0x30);
} // namespace game
using gameAreaData = game::AreaData;
} // namespace RED4ext

// clang-format on
