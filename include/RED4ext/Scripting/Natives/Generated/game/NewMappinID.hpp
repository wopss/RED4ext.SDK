#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct NewMappinID
{
    static constexpr const char* NAME = "gameNewMappinID";
    static constexpr const char* ALIAS = "NewMappinID";

    uint64_t value; // 00
};
RED4EXT_ASSERT_SIZE(NewMappinID, 0x8);
} // namespace game
using gameNewMappinID = game::NewMappinID;
using NewMappinID = game::NewMappinID;
} // namespace RED4ext

// clang-format on
