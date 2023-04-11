#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtRef.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ReplicatedLookAtData.hpp>

namespace RED4ext
{
namespace ent
{
struct ReplicatedLookAtRemove : ent::ReplicatedLookAtData
{
    static constexpr const char* NAME = "entReplicatedLookAtRemove";
    static constexpr const char* ALIAS = NAME;

    anim::LookAtRef ref; // 10
    float hasOutTransition; // 20
    float outTransitionSpeed; // 24
};
RED4EXT_ASSERT_SIZE(ReplicatedLookAtRemove, 0x28);
} // namespace ent
using entReplicatedLookAtRemove = ent::ReplicatedLookAtRemove;
} // namespace RED4ext

// clang-format on
