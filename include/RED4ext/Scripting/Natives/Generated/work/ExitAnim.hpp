#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/MovementType.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IEntry.hpp>

namespace RED4ext
{
namespace work { 
struct ExitAnim : work::IEntry
{
    static constexpr const char* NAME = "workExitAnim";
    static constexpr const char* ALIAS = NAME;

    CName animName; // 38
    CName slotName; // 40
    CName idleAnim; // 48
    bool isSynchronized; // 50
    bool stayOnNavmesh; // 51
    bool snapZToNavmesh; // 52
    bool disableRandomExit; // 53
    uint8_t unk54[0x60 - 0x54]; // 54
    Transform syncOffset; // 60
    move::MovementType movementType; // 80
    uint8_t unk84[0x90 - 0x84]; // 84
};
RED4EXT_ASSERT_SIZE(ExitAnim, 0x90);
} // namespace work
} // namespace RED4ext
