#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IInterruptionScenarioOperation.hpp>

namespace RED4ext
{
namespace scn
{
struct ToggleScenario_InterruptionScenarioOperation : scn::IInterruptionScenarioOperation
{
    static constexpr const char* NAME = "scnToggleScenario_InterruptionScenarioOperation";
    static constexpr const char* ALIAS = NAME;

    bool enable; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(ToggleScenario_InterruptionScenarioOperation, 0x38);
} // namespace scn
using scnToggleScenario_InterruptionScenarioOperation = scn::ToggleScenario_InterruptionScenarioOperation;
} // namespace RED4ext

// clang-format on
