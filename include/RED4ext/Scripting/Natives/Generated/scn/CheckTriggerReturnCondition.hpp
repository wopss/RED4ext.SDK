#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/CheckTriggerReturnConditionParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IReturnCondition.hpp>

namespace RED4ext
{
namespace scn
{
struct CheckTriggerReturnCondition : scn::IReturnCondition
{
    static constexpr const char* NAME = "scnCheckTriggerReturnCondition";
    static constexpr const char* ALIAS = NAME;

    scn::CheckTriggerReturnConditionParams params; // 30
    uint8_t unk40[0x70 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(CheckTriggerReturnCondition, 0x70);
} // namespace scn
using scnCheckTriggerReturnCondition = scn::CheckTriggerReturnCondition;
} // namespace RED4ext

// clang-format on
