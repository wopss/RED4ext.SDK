#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/SquadAudioMemberBase.hpp>

namespace RED4ext
{
namespace AI
{
struct GameToneDetectorSquadAudioMember : AI::SquadAudioMemberBase
{
    static constexpr const char* NAME = "AIGameToneDetectorSquadAudioMember";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0x80 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(GameToneDetectorSquadAudioMember, 0x80);
} // namespace AI
using AIGameToneDetectorSquadAudioMember = AI::GameToneDetectorSquadAudioMember;
} // namespace RED4ext

// clang-format on
