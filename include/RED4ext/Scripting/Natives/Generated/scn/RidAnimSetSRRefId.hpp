#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn
{
struct RidAnimSetSRRefId
{
    static constexpr const char* NAME = "scnRidAnimSetSRRefId";
    static constexpr const char* ALIAS = NAME;

    uint32_t id; // 00
};
RED4EXT_ASSERT_SIZE(RidAnimSetSRRefId, 0x4);
} // namespace scn
using scnRidAnimSetSRRefId = scn::RidAnimSetSRRefId;
} // namespace RED4ext

// clang-format on
