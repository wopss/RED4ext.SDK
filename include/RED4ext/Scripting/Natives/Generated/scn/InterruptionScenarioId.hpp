#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn
{
struct InterruptionScenarioId
{
    static constexpr const char* NAME = "scnInterruptionScenarioId";
    static constexpr const char* ALIAS = NAME;

    uint32_t id; // 00
};
RED4EXT_ASSERT_SIZE(InterruptionScenarioId, 0x4);
} // namespace scn
using scnInterruptionScenarioId = scn::InterruptionScenarioId;
} // namespace RED4ext

// clang-format on
