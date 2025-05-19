#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::interactions {
enum class ChoiceType : int32_t
{
    QuestImportant = 1,
    AlreadyRead = 2,
    Inactive = 4,
    CheckSuccess = 8,
    CheckFailed = 16,
    InnerDialog = 32,
    PossessedDialog = 64,
    TimedDialog = 128,
    Blueline = 256,
    Pay = 512,
    Selected = 1024,
    Illegal = 2048,
    Glowline = 4096,
};
} // namespace game::interactions
using gameinteractionsChoiceType = game::interactions::ChoiceType;
} // namespace RED4ext

// clang-format on
