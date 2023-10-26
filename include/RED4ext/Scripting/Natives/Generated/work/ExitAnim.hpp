#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/MovementType.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IEntry.hpp>

namespace RED4ext
{
namespace work
{
struct __declspec(align(0x10)) ExitAnim : work::IEntry
{
    static constexpr const char* NAME = "workExitAnim";
    static constexpr const char* ALIAS = NAME;

    CName animName; // 38
    CName slotName; // 40
    bool disableAutoTransition; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
    CName idleAnim; // 50
    bool isSynchronized; // 58
    bool stayOnNavmesh; // 59
    bool snapZToNavmesh; // 5A
    bool forceNoZSnap; // 5B
    bool disableRandomExit; // 5C
    uint8_t unk5D[0x60 - 0x5D]; // 5D
    Transform syncOffset; // 60
    move::MovementType movementType; // 80
    uint8_t unk84[0x90 - 0x84]; // 84
};
RED4EXT_ASSERT_SIZE(ExitAnim, 0x90);
} // namespace work
using workExitAnim = work::ExitAnim;
} // namespace RED4ext

// clang-format on
