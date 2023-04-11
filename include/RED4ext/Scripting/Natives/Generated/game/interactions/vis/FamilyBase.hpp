#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::interactions::vis
{
struct FamilyBase
{
    static constexpr const char* NAME = "gameinteractionsvisFamilyBase";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x20 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(FamilyBase, 0x20);
} // namespace game::interactions::vis
using gameinteractionsvisFamilyBase = game::interactions::vis::FamilyBase;
} // namespace RED4ext

// clang-format on
