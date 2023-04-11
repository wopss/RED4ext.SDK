#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ReplicatedAnimFeature.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/Time.hpp>

namespace RED4ext
{
namespace ent
{
struct ReplicatedAnimFeaturesState
{
    static constexpr const char* NAME = "entReplicatedAnimFeaturesState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    DynArray<ent::ReplicatedAnimFeature> items; // 08
    net::Time lastAppliedActionsTime; // 18
    uint8_t unk20[0x30 - 0x20]; // 20
};
RED4EXT_ASSERT_SIZE(ReplicatedAnimFeaturesState, 0x30);
} // namespace ent
using entReplicatedAnimFeaturesState = ent::ReplicatedAnimFeaturesState;
} // namespace RED4ext

// clang-format on
