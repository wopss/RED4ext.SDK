#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldPosition.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) WorldTransform
{
    static constexpr const char* NAME = "WorldTransform";
    static constexpr const char* ALIAS = NAME;

    WorldPosition Position; // 00
    uint8_t unk0C[0x10 - 0xC]; // C
    Quaternion Orientation; // 10
};
RED4EXT_ASSERT_SIZE(WorldTransform, 0x20);
} // namespace RED4ext

// clang-format on
