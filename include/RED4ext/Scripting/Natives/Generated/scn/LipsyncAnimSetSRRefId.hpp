#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn
{
struct LipsyncAnimSetSRRefId
{
    static constexpr const char* NAME = "scnLipsyncAnimSetSRRefId";
    static constexpr const char* ALIAS = NAME;

    uint32_t id; // 00
};
RED4EXT_ASSERT_SIZE(LipsyncAnimSetSRRefId, 0x4);
} // namespace scn
using scnLipsyncAnimSetSRRefId = scn::LipsyncAnimSetSRRefId;
} // namespace RED4ext

// clang-format on
