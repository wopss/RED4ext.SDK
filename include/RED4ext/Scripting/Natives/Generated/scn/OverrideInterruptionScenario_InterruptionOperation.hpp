#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IInterruptionOperation.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/InterruptionScenarioId.hpp>

namespace RED4ext
{
namespace scn { struct IInterruptionScenarioOperation; }

namespace scn
{
struct OverrideInterruptionScenario_InterruptionOperation : scn::IInterruptionOperation
{
    static constexpr const char* NAME = "scnOverrideInterruptionScenario_InterruptionOperation";
    static constexpr const char* ALIAS = NAME;

    scn::InterruptionScenarioId scenarioId; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    DynArray<Handle<scn::IInterruptionScenarioOperation>> scenarioOperations; // 38
};
RED4EXT_ASSERT_SIZE(OverrideInterruptionScenario_InterruptionOperation, 0x48);
} // namespace scn
using scnOverrideInterruptionScenario_InterruptionOperation = scn::OverrideInterruptionScenario_InterruptionOperation;
} // namespace RED4ext

// clang-format on
