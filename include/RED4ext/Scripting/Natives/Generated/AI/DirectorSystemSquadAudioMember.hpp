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
struct DirectorSystemSquadAudioMember : AI::SquadAudioMemberBase
{
    static constexpr const char* NAME = "AIDirectorSystemSquadAudioMember";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0xD8 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(DirectorSystemSquadAudioMember, 0xD8);
} // namespace AI
using AIDirectorSystemSquadAudioMember = AI::DirectorSystemSquadAudioMember;
} // namespace RED4ext

// clang-format on
