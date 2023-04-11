#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn::screenplay
{
struct ItemId
{
    static constexpr const char* NAME = "scnscreenplayItemId";
    static constexpr const char* ALIAS = NAME;

    uint32_t id; // 00
};
RED4EXT_ASSERT_SIZE(ItemId, 0x4);
} // namespace scn::screenplay
using scnscreenplayItemId = scn::screenplay::ItemId;
} // namespace RED4ext

// clang-format on
