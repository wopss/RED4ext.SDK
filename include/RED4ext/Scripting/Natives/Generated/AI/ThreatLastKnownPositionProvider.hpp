#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ThreatPositionProvider.hpp>

namespace RED4ext
{
namespace AI
{
struct ThreatLastKnownPositionProvider : AI::ThreatPositionProvider
{
    static constexpr const char* NAME = "AIThreatLastKnownPositionProvider";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ThreatLastKnownPositionProvider, 0xA0);
} // namespace AI
using AIThreatLastKnownPositionProvider = AI::ThreatLastKnownPositionProvider;
} // namespace RED4ext

// clang-format on
