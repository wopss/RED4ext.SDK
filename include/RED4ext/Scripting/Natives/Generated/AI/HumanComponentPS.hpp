#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CommandQueuePS.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/SpotUsageToken.hpp>

namespace RED4ext
{
namespace AI
{
struct HumanComponentPS : AI::CommandQueuePS
{
    static constexpr const char* NAME = "AIHumanComponentPS";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk390[0x3B0 - 0x390]; // 390
    AI::SpotUsageToken spotUsageToken; // 3B0
    uint8_t unk3C8[0x3D8 - 0x3C8]; // 3C8
};
RED4EXT_ASSERT_SIZE(HumanComponentPS, 0x3D8);
} // namespace AI
using AIHumanComponentPS = AI::HumanComponentPS;
} // namespace RED4ext

// clang-format on
