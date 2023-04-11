#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ISmartCoverManager.hpp>

namespace RED4ext
{
namespace AI
{
struct SmartCoverManager : AI::ISmartCoverManager
{
    static constexpr const char* NAME = "AISmartCoverManager";
    static constexpr const char* ALIAS = "CoverManager";

    uint8_t unk48[0x228 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(SmartCoverManager, 0x228);
} // namespace AI
using AISmartCoverManager = AI::SmartCoverManager;
using CoverManager = AI::SmartCoverManager;
} // namespace RED4ext

// clang-format on
