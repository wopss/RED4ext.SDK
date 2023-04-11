#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn
{
struct RidCyberwareAnimSetSRRefId
{
    static constexpr const char* NAME = "scnRidCyberwareAnimSetSRRefId";
    static constexpr const char* ALIAS = NAME;

    uint32_t id; // 00
};
RED4EXT_ASSERT_SIZE(RidCyberwareAnimSetSRRefId, 0x4);
} // namespace scn
using scnRidCyberwareAnimSetSRRefId = scn::RidCyberwareAnimSetSRRefId;
} // namespace RED4ext

// clang-format on
