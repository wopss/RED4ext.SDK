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
struct MusicSystemSquadAudioMember : AI::SquadAudioMemberBase
{
    static constexpr const char* NAME = "AIMusicSystemSquadAudioMember";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0x90 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(MusicSystemSquadAudioMember, 0x90);
} // namespace AI
using AIMusicSystemSquadAudioMember = AI::MusicSystemSquadAudioMember;
} // namespace RED4ext

// clang-format on
