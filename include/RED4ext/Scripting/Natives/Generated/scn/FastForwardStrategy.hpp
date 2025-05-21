#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace scn {
enum class FastForwardStrategy : int32_t
{
    automatic = 0,
    allow_fully = 1,
    block_on_start = 2,
    block_on_end = 3,
    block_on_start_and_end = 4,
    block_fully = 5,
    block_on_end_if_activator_matched = 6,
};
} // namespace scn
using scnFastForwardStrategy = scn::FastForwardStrategy;
} // namespace RED4ext

// clang-format on
