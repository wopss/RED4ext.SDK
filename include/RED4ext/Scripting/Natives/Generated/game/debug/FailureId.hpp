#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::debug
{
struct FailureId
{
    static constexpr const char* NAME = "gamedebugFailureId";
    static constexpr const char* ALIAS = NAME;

    uint32_t threadId; // 00
    uint32_t unsignedId; // 04
};
RED4EXT_ASSERT_SIZE(FailureId, 0x8);
} // namespace game::debug
using gamedebugFailureId = game::debug::FailureId;
} // namespace RED4ext

// clang-format on
