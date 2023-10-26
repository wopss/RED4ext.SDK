#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct UniqueActiveCommandList
{
    static constexpr const char* NAME = "AIbehaviorUniqueActiveCommandList";
    static constexpr const char* ALIAS = "AIActiveCommandList";

    uint8_t unk00[0x58 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(UniqueActiveCommandList, 0x58);
} // namespace AI::behavior
using AIbehaviorUniqueActiveCommandList = AI::behavior::UniqueActiveCommandList;
using AIActiveCommandList = AI::behavior::UniqueActiveCommandList;
} // namespace RED4ext

// clang-format on
