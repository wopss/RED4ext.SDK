#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/AI/SquadMemberBase.hpp>

namespace RED4ext
{
namespace AI { 
struct SquadAudioMemberBase : AI::SquadMemberBase
{
    static constexpr const char* NAME = "AISquadAudioMemberBase";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk68[0x78 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(SquadAudioMemberBase, 0x78);
} // namespace AI
} // namespace RED4ext
