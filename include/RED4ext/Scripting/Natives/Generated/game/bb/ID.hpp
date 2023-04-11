#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace game::bb
{
struct ID
{
    static constexpr const char* NAME = "gamebbID";
    static constexpr const char* ALIAS = NAME;

    CName g; // 00
};
RED4EXT_ASSERT_SIZE(ID, 0x8);
} // namespace game::bb
using gamebbID = game::bb::ID;
} // namespace RED4ext

// clang-format on
