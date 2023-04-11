#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace AI
{
struct ObjectId
{
    static constexpr const char* NAME = "AIObjectId";
    static constexpr const char* ALIAS = NAME;

    uint64_t value; // 00
};
RED4EXT_ASSERT_SIZE(ObjectId, 0x8);
} // namespace AI
using AIObjectId = AI::ObjectId;
} // namespace RED4ext

// clang-format on
