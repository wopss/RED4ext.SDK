#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ActorId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/AdditionalSpeakerType.hpp>

namespace RED4ext
{
namespace scn
{
struct AdditionalSpeaker
{
    static constexpr const char* NAME = "scnAdditionalSpeaker";
    static constexpr const char* ALIAS = NAME;

    scn::ActorId actorId; // 00
    scn::AdditionalSpeakerType type; // 04
};
RED4EXT_ASSERT_SIZE(AdditionalSpeaker, 0x8);
} // namespace scn
using scnAdditionalSpeaker = scn::AdditionalSpeaker;
} // namespace RED4ext

// clang-format on
