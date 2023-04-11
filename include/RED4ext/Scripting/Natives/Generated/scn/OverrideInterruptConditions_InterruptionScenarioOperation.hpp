#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IInterruptionScenarioOperation.hpp>

namespace RED4ext
{
namespace scn { struct IInterruptCondition; }

namespace scn
{
struct OverrideInterruptConditions_InterruptionScenarioOperation : scn::IInterruptionScenarioOperation
{
    static constexpr const char* NAME = "scnOverrideInterruptConditions_InterruptionScenarioOperation";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<scn::IInterruptCondition>> interruptConditions; // 30
};
RED4EXT_ASSERT_SIZE(OverrideInterruptConditions_InterruptionScenarioOperation, 0x40);
} // namespace scn
using scnOverrideInterruptConditions_InterruptionScenarioOperation = scn::OverrideInterruptConditions_InterruptionScenarioOperation;
} // namespace RED4ext

// clang-format on
