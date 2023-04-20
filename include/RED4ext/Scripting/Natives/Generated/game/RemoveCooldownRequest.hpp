#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct RemoveCooldownRequest
{
    static constexpr const char* NAME = "gameRemoveCooldownRequest";
    static constexpr const char* ALIAS = NAME;

    uint32_t id; // 00
};
RED4EXT_ASSERT_SIZE(RemoveCooldownRequest, 0x4);
} // namespace game
using gameRemoveCooldownRequest = game::RemoveCooldownRequest;
} // namespace RED4ext

// clang-format on
