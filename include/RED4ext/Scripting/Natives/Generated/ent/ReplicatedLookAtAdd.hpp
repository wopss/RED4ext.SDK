#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtRef.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtRequest.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ReplicatedLookAtData.hpp>

namespace RED4ext
{
namespace ent { struct IPositionProvider; }

namespace ent
{
struct ReplicatedLookAtAdd : ent::ReplicatedLookAtData
{
    static constexpr const char* NAME = "entReplicatedLookAtAdd";
    static constexpr const char* ALIAS = NAME;

    CName bodyPart; // 10
    anim::LookAtRequest request; // 18
    Handle<ent::IPositionProvider> targetPositionProvider; // 88
    anim::LookAtRef ref; // 98
};
RED4EXT_ASSERT_SIZE(ReplicatedLookAtAdd, 0xA8);
} // namespace ent
using entReplicatedLookAtAdd = ent::ReplicatedLookAtAdd;
} // namespace RED4ext

// clang-format on
