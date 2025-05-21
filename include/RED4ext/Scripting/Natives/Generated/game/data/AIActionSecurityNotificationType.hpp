#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class AIActionSecurityNotificationType : int32_t
{
    COMBAT = 0,
    DEESCALATE = 1,
    DEFAULT = 2,
    ILLEGAL_ACTION = 3,
    REPRIMAND_ESCALATE = 4,
    REPRIMAND_SUCCESSFUL = 5,
    SECURITY_GATE = 6,
    Count = 7,
    Invalid = 8,
};
} // namespace game::data
using gamedataAIActionSecurityNotificationType = game::data::AIActionSecurityNotificationType;
} // namespace RED4ext

// clang-format on
