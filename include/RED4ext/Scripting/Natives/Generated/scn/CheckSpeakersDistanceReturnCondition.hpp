#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/CheckSpeakersDistanceReturnConditionParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IReturnCondition.hpp>

namespace RED4ext
{
namespace scn { 
struct CheckSpeakersDistanceReturnCondition : scn::IReturnCondition
{
    static constexpr const char* NAME = "scnCheckSpeakersDistanceReturnCondition";
    static constexpr const char* ALIAS = NAME;

    scn::CheckSpeakersDistanceReturnConditionParams params; // 30
};
RED4EXT_ASSERT_SIZE(CheckSpeakersDistanceReturnCondition, 0x38);
} // namespace scn
} // namespace RED4ext
