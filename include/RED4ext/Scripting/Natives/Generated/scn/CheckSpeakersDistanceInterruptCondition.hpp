#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/CheckSpeakersDistanceInterruptConditionParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IInterruptCondition.hpp>

namespace RED4ext
{
namespace scn { 
struct CheckSpeakersDistanceInterruptCondition : scn::IInterruptCondition
{
    static constexpr const char* NAME = "scnCheckSpeakersDistanceInterruptCondition";
    static constexpr const char* ALIAS = NAME;

    scn::CheckSpeakersDistanceInterruptConditionParams params; // 30
};
RED4EXT_ASSERT_SIZE(CheckSpeakersDistanceInterruptCondition, 0x38);
} // namespace scn
} // namespace RED4ext
