#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/EngineTime.hpp>

namespace RED4ext
{
namespace game
{
struct FuncCallEntry : ISerializable
{
    static constexpr const char* NAME = "gameFuncCallEntry";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x88 - 0x30]; // 30
    EngineTime callTime; // 88
    uint32_t callId; // 90
    uint8_t unk94[0x98 - 0x94]; // 94
};
RED4EXT_ASSERT_SIZE(FuncCallEntry, 0x98);
} // namespace game
using gameFuncCallEntry = game::FuncCallEntry;
} // namespace RED4ext

// clang-format on
