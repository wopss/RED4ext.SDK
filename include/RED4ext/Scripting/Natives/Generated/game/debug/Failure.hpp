#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/DebugPath.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/debug/FailureId.hpp>

namespace RED4ext
{

namespace game::debug
{
struct Failure : ISerializable
{
    static constexpr const char* NAME = "gamedebugFailure";
    static constexpr const char* ALIAS = NAME;

    game::debug::FailureId id; // 30
    float time; // 38
    uint8_t unk3C[0x48 - 0x3C]; // 3C
    CString message; // 48
    game::DebugPath path; // 68
    Handle<game::debug::Failure> previous; // 90
    Handle<game::debug::Failure> cause; // A0
};
RED4EXT_ASSERT_SIZE(Failure, 0xB0);
} // namespace game::debug
using gamedebugFailure = game::debug::Failure;
} // namespace RED4ext

// clang-format on
