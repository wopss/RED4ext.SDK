#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IInterruptCondition.hpp>

namespace RED4ext
{
namespace scn { 
struct CheckSpeakerDistractedInterruptCondition : scn::IInterruptCondition
{
    static constexpr const char* NAME = "scnCheckSpeakerDistractedInterruptCondition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CheckSpeakerDistractedInterruptCondition, 0x30);
} // namespace scn
} // namespace RED4ext
