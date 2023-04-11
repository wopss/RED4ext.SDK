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
struct DelayedFunctionsScheduler : ISerializable
{
    static constexpr const char* NAME = "gameDelayedFunctionsScheduler";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x50 - 0x30]; // 30
    EngineTime currentTime; // 50
    uint32_t nextCallId; // 58
    uint8_t unk5C[0x5D - 0x5C]; // 5C
    bool initialized; // 5D
    uint8_t unk5E[0x60 - 0x5E]; // 5E
};
RED4EXT_ASSERT_SIZE(DelayedFunctionsScheduler, 0x60);
} // namespace game
using gameDelayedFunctionsScheduler = game::DelayedFunctionsScheduler;
} // namespace RED4ext

// clang-format on
