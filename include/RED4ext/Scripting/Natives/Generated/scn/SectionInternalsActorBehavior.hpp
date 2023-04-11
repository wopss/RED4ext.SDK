#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ActorId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SectionInternalsActorBehaviorMode.hpp>

namespace RED4ext
{
namespace scn
{
struct SectionInternalsActorBehavior
{
    static constexpr const char* NAME = "scnSectionInternalsActorBehavior";
    static constexpr const char* ALIAS = NAME;

    scn::ActorId actorId; // 00
    scn::SectionInternalsActorBehaviorMode behaviorMode; // 04
};
RED4EXT_ASSERT_SIZE(SectionInternalsActorBehavior, 0x8);
} // namespace scn
using scnSectionInternalsActorBehavior = scn::SectionInternalsActorBehavior;
} // namespace RED4ext

// clang-format on
