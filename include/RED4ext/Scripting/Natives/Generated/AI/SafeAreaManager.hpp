#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ISafeAreaManager.hpp>

namespace RED4ext
{
namespace AI
{
struct SafeAreaManager : AI::ISafeAreaManager
{
    static constexpr const char* NAME = "AISafeAreaManager";
    static constexpr const char* ALIAS = "SafeAreaManager";

    uint8_t unk48[0xD8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(SafeAreaManager, 0xD8);
} // namespace AI
using AISafeAreaManager = AI::SafeAreaManager;
using SafeAreaManager = AI::SafeAreaManager;
} // namespace RED4ext

// clang-format on
