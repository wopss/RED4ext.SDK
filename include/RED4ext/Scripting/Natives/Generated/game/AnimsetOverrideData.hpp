#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace game
{
struct AnimsetOverrideData
{
    static constexpr const char* NAME = "gameAnimsetOverrideData";
    static constexpr const char* ALIAS = NAME;

    uint64_t animsetHash; // 00
    DynArray<CName> variables; // 08
};
RED4EXT_ASSERT_SIZE(AnimsetOverrideData, 0x18);
} // namespace game
using gameAnimsetOverrideData = game::AnimsetOverrideData;
} // namespace RED4ext

// clang-format on
