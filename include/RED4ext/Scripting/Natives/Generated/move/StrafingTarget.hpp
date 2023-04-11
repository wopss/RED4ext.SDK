#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace move
{
struct StrafingTarget
{
    static constexpr const char* NAME = "moveStrafingTarget";
    static constexpr const char* ALIAS = "StrafingTarget";

    Vector3 position; // 00
    uint8_t unk0C[0x10 - 0xC]; // C
    WeakHandle<game::Object> object; // 10
    uint8_t unk20[0x28 - 0x20]; // 20
};
RED4EXT_ASSERT_SIZE(StrafingTarget, 0x28);
} // namespace move
using moveStrafingTarget = move::StrafingTarget;
using StrafingTarget = move::StrafingTarget;
} // namespace RED4ext

// clang-format on
