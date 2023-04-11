#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPositionProvider.hpp>

namespace RED4ext
{
namespace AI
{
struct ThreatPositionProvider : ent::IPositionProvider
{
    static constexpr const char* NAME = "AIThreatPositionProvider";
    static constexpr const char* ALIAS = "ThreatPositionProvider";

    uint8_t unk50[0xA0 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(ThreatPositionProvider, 0xA0);
} // namespace AI
using AIThreatPositionProvider = AI::ThreatPositionProvider;
using ThreatPositionProvider = AI::ThreatPositionProvider;
} // namespace RED4ext

// clang-format on
