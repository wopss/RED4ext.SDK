#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ISystem.hpp>

namespace RED4ext
{
namespace AI
{
struct SystemImpl : AI::ISystem
{
    static constexpr const char* NAME = "AISystemImpl";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x240 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(SystemImpl, 0x240);
} // namespace AI
using AISystemImpl = AI::SystemImpl;
} // namespace RED4ext

// clang-format on
