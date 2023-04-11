#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/SquadBase.hpp>

namespace RED4ext
{
namespace AI
{
struct AudioSquad : AI::SquadBase
{
    static constexpr const char* NAME = "AIAudioSquad";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AudioSquad, 0x148);
} // namespace AI
using AIAudioSquad = AI::AudioSquad;
} // namespace RED4ext

// clang-format on
