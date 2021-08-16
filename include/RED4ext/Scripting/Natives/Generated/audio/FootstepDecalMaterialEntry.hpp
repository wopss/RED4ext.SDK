#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace audio { struct LocomotionStateEventDictionary; }

namespace audio { 
struct FootstepDecalMaterialEntry
{
    static constexpr const char* NAME = "audioFootstepDecalMaterialEntry";
    static constexpr const char* ALIAS = NAME;

    CName materialTag; // 00
    Handle<audio::LocomotionStateEventDictionary> eventsByLocomotionState; // 08
};
RED4EXT_ASSERT_SIZE(FootstepDecalMaterialEntry, 0x18);
} // namespace audio
} // namespace RED4ext
