#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/AnimationRid.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidTag.hpp>

namespace RED4ext
{
namespace scn
{
struct ActorRid
{
    static constexpr const char* NAME = "scnActorRid";
    static constexpr const char* ALIAS = NAME;

    scn::RidTag tag; // 00
    DynArray<scn::AnimationRid> animations; // 10
    DynArray<scn::AnimationRid> facialAnimations; // 20
    DynArray<scn::AnimationRid> cyberwareAnimations; // 30
};
RED4EXT_ASSERT_SIZE(ActorRid, 0x40);
} // namespace scn
using scnActorRid = scn::ActorRid;
} // namespace RED4ext

// clang-format on
