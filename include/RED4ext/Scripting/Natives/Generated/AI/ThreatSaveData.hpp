#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>

namespace RED4ext
{
namespace AI
{
struct ThreatSaveData
{
    static constexpr const char* NAME = "AIThreatSaveData";
    static constexpr const char* ALIAS = NAME;

    ent::EntityID entityId; // 00
    uint32_t persistenceSourceBitMask; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(ThreatSaveData, 0x10);
} // namespace AI
using AIThreatSaveData = AI::ThreatSaveData;
} // namespace RED4ext

// clang-format on
