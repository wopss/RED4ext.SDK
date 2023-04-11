#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IInterruptCondition.hpp>

namespace RED4ext
{
namespace scn
{
struct CheckAnyoneDistractedInterruptCondition : scn::IInterruptCondition
{
    static constexpr const char* NAME = "scnCheckAnyoneDistractedInterruptCondition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CheckAnyoneDistractedInterruptCondition, 0x30);
} // namespace scn
using scnCheckAnyoneDistractedInterruptCondition = scn::CheckAnyoneDistractedInterruptCondition;
} // namespace RED4ext

// clang-format on
