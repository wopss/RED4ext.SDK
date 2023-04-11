#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IInterruptionOperation.hpp>

namespace RED4ext
{
namespace scn
{
struct ToggleInterruption_InterruptionOperation : scn::IInterruptionOperation
{
    static constexpr const char* NAME = "scnToggleInterruption_InterruptionOperation";
    static constexpr const char* ALIAS = NAME;

    bool enable; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(ToggleInterruption_InterruptionOperation, 0x38);
} // namespace scn
using scnToggleInterruption_InterruptionOperation = scn::ToggleInterruption_InterruptionOperation;
} // namespace RED4ext

// clang-format on
