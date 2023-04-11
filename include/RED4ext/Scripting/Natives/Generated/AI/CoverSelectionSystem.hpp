#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ICoverSelectionSystem.hpp>

namespace RED4ext
{
namespace AI
{
struct CoverSelectionSystem : AI::ICoverSelectionSystem
{
    static constexpr const char* NAME = "AICoverSelectionSystem";
    static constexpr const char* ALIAS = "CoverSelectionSystem";

    uint8_t unk48[0xD8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CoverSelectionSystem, 0xD8);
} // namespace AI
using AICoverSelectionSystem = AI::CoverSelectionSystem;
using CoverSelectionSystem = AI::CoverSelectionSystem;
} // namespace RED4ext

// clang-format on
