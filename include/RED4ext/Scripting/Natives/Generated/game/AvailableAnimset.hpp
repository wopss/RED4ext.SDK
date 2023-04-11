#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game
{
struct AvailableAnimset
{
    static constexpr const char* NAME = "gameAvailableAnimset";
    static constexpr const char* ALIAS = NAME;

    uint64_t hash; // 00
    CString resourcePath; // 08
};
RED4EXT_ASSERT_SIZE(AvailableAnimset, 0x28);
} // namespace game
using gameAvailableAnimset = game::AvailableAnimset;
} // namespace RED4ext

// clang-format on
