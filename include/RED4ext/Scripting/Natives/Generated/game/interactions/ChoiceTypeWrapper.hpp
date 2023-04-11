#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct ChoiceTypeWrapper
{
    static constexpr const char* NAME = "gameinteractionsChoiceTypeWrapper";
    static constexpr const char* ALIAS = "ChoiceTypeWrapper";

    uint32_t properties; // 00
};
RED4EXT_ASSERT_SIZE(ChoiceTypeWrapper, 0x4);
} // namespace game::interactions
using gameinteractionsChoiceTypeWrapper = game::interactions::ChoiceTypeWrapper;
using ChoiceTypeWrapper = game::interactions::ChoiceTypeWrapper;
} // namespace RED4ext

// clang-format on
