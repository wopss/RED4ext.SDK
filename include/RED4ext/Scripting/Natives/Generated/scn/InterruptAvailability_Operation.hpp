#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IInterruptManager_Operation.hpp>

namespace RED4ext
{
namespace scn
{
struct InterruptAvailability_Operation : scn::IInterruptManager_Operation
{
    static constexpr const char* NAME = "scnInterruptAvailability_Operation";
    static constexpr const char* ALIAS = NAME;

    bool available; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(InterruptAvailability_Operation, 0x38);
} // namespace scn
using scnInterruptAvailability_Operation = scn::InterruptAvailability_Operation;
} // namespace RED4ext

// clang-format on
