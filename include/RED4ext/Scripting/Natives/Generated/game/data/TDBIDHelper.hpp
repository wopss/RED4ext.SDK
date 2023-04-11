#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::data
{
struct TDBIDHelper
{
    static constexpr const char* NAME = "gamedataTDBIDHelper";
    static constexpr const char* ALIAS = "TDBID";

    uint8_t unk00[0x40 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(TDBIDHelper, 0x40);
} // namespace game::data
using gamedataTDBIDHelper = game::data::TDBIDHelper;
using TDBID = game::data::TDBIDHelper;
} // namespace RED4ext

// clang-format on
