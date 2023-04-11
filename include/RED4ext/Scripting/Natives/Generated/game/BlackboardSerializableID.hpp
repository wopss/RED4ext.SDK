#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace game
{
struct BlackboardSerializableID
{
    static constexpr const char* NAME = "gameBlackboardSerializableID";
    static constexpr const char* ALIAS = "BlackboardSerializableID";

    CName blackboardName; // 00
    CName fieldName; // 08
    uint8_t unk10[0x20 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(BlackboardSerializableID, 0x20);
} // namespace game
using gameBlackboardSerializableID = game::BlackboardSerializableID;
using BlackboardSerializableID = game::BlackboardSerializableID;
} // namespace RED4ext

// clang-format on
