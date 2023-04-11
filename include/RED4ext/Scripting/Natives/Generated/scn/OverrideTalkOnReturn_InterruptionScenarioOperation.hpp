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
struct OverrideTalkOnReturn_InterruptionScenarioOperation : scn::IInterruptionScenarioOperation
{
    static constexpr const char* NAME = "scnOverrideTalkOnReturn_InterruptionScenarioOperation";
    static constexpr const char* ALIAS = NAME;

    bool talkOnReturn; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(OverrideTalkOnReturn_InterruptionScenarioOperation, 0x38);
} // namespace scn
using scnOverrideTalkOnReturn_InterruptionScenarioOperation = scn::OverrideTalkOnReturn_InterruptionScenarioOperation;
} // namespace RED4ext

// clang-format on
