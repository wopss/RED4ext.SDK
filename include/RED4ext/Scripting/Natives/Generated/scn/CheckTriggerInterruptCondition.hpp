#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/CheckTriggerInterruptConditionParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IInterruptCondition.hpp>

namespace RED4ext
{
namespace scn
{
struct CheckTriggerInterruptCondition : scn::IInterruptCondition
{
    static constexpr const char* NAME = "scnCheckTriggerInterruptCondition";
    static constexpr const char* ALIAS = NAME;

    scn::CheckTriggerInterruptConditionParams params; // 30
    uint8_t unk40[0x70 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(CheckTriggerInterruptCondition, 0x70);
} // namespace scn
using scnCheckTriggerInterruptCondition = scn::CheckTriggerInterruptCondition;
} // namespace RED4ext

// clang-format on
