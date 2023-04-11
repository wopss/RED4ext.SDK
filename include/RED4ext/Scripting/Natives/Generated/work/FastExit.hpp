#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/MovementType.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IEntry.hpp>

namespace RED4ext
{
namespace work
{
struct FastExit : work::IEntry
{
    static constexpr const char* NAME = "workFastExit";
    static constexpr const char* ALIAS = NAME;

    CName animName; // 38
    float forcedBlendIn; // 40
    move::MovementType movementType; // 44
};
RED4EXT_ASSERT_SIZE(FastExit, 0x48);
} // namespace work
using workFastExit = work::FastExit;
} // namespace RED4ext

// clang-format on
