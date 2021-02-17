#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/scn/IInterruptCondition.hpp>

namespace RED4ext
{
namespace scn { 
struct CheckSpeakerOrAddressDistractedInterruptCondition : scn::IInterruptCondition
{
    static constexpr const char* NAME = "scnCheckSpeakerOrAddressDistractedInterruptCondition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CheckSpeakerOrAddressDistractedInterruptCondition, 0x30);
} // namespace scn
} // namespace RED4ext
