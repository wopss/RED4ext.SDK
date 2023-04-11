#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/SquadMemberBase.hpp>

namespace RED4ext
{
namespace AI
{
struct SquadNPCMember : AI::SquadMemberBase
{
    static constexpr const char* NAME = "AISquadNPCMember";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk68[0x90 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(SquadNPCMember, 0x90);
} // namespace AI
using AISquadNPCMember = AI::SquadNPCMember;
} // namespace RED4ext

// clang-format on
