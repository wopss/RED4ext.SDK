#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct DismemberedLimbCount
{
    static constexpr const char* NAME = "gameDismemberedLimbCount";
    static constexpr const char* ALIAS = "DismemberedLimbCount";

    uint32_t fleshDismemberments; // 00
    uint32_t cyberDismemberments; // 04
};
RED4EXT_ASSERT_SIZE(DismemberedLimbCount, 0x8);
} // namespace game
using gameDismemberedLimbCount = game::DismemberedLimbCount;
using DismemberedLimbCount = game::DismemberedLimbCount;
} // namespace RED4ext

// clang-format on
