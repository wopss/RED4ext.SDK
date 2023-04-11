#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn
{
struct RidAnimationSRRefId
{
    static constexpr const char* NAME = "scnRidAnimationSRRefId";
    static constexpr const char* ALIAS = NAME;

    uint32_t id; // 00
};
RED4EXT_ASSERT_SIZE(RidAnimationSRRefId, 0x4);
} // namespace scn
using scnRidAnimationSRRefId = scn::RidAnimationSRRefId;
} // namespace RED4ext

// clang-format on
