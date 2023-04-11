#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ReplicatedItem.hpp>

namespace RED4ext
{
namespace anim { struct AnimFeature; }

namespace ent
{
struct ReplicatedAnimFeature : ent::ReplicatedItem
{
    static constexpr const char* NAME = "entReplicatedAnimFeature";
    static constexpr const char* ALIAS = NAME;

    CName name; // 20
    Handle<anim::AnimFeature> value; // 28
    bool invokeCallback; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(ReplicatedAnimFeature, 0x40);
} // namespace ent
using entReplicatedAnimFeature = ent::ReplicatedAnimFeature;
} // namespace RED4ext

// clang-format on
