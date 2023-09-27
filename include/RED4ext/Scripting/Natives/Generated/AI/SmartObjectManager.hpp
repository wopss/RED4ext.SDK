#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ISmartObjectManager.hpp>

namespace RED4ext
{
namespace AI
{
struct SmartObjectManager : AI::ISmartObjectManager
{
    static constexpr const char* NAME = "AISmartObjectManager";
    static constexpr const char* ALIAS = "SmartObjectManager";

    uint8_t unk48[0x158 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(SmartObjectManager, 0x158);
} // namespace AI
using AISmartObjectManager = AI::SmartObjectManager;
using SmartObjectManager = AI::SmartObjectManager;
} // namespace RED4ext

// clang-format on
