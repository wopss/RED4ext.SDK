#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn
{
struct RidAnimationContainerSRRefId
{
    static constexpr const char* NAME = "scnRidAnimationContainerSRRefId";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x4 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(RidAnimationContainerSRRefId, 0x4);
} // namespace scn
using scnRidAnimationContainerSRRefId = scn::RidAnimationContainerSRRefId;
} // namespace RED4ext

// clang-format on
