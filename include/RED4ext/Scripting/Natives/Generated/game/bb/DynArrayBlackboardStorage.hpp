#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::bb
{
struct DynArrayBlackboardStorage
{
    static constexpr const char* NAME = "gamebbDynArrayBlackboardStorage";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x90 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(DynArrayBlackboardStorage, 0x90);
} // namespace game::bb
using gamebbDynArrayBlackboardStorage = game::bb::DynArrayBlackboardStorage;
} // namespace RED4ext

// clang-format on
