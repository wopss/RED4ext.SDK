#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct HotSpotActivationResult
{
    static constexpr const char* NAME = "gameinteractionsHotSpotActivationResult";
    static constexpr const char* ALIAS = NAME;

    float priority; // 00
};
RED4EXT_ASSERT_SIZE(HotSpotActivationResult, 0x4);
} // namespace game::interactions
using gameinteractionsHotSpotActivationResult = game::interactions::HotSpotActivationResult;
} // namespace RED4ext

// clang-format on
