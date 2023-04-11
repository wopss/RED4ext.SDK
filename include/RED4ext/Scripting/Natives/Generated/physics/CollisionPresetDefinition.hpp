#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace physics
{
struct CollisionPresetDefinition : ISerializable
{
    static constexpr const char* NAME = "physicsCollisionPresetDefinition";
    static constexpr const char* ALIAS = NAME;

    CName Name; // 30
    CString Description; // 38
    bool ForceEnableCollisionCallbacks; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
    DynArray<CName> CollisionType; // 60
    DynArray<CName> CollisionMask; // 70
    DynArray<CName> QueryDetect; // 80
};
RED4EXT_ASSERT_SIZE(CollisionPresetDefinition, 0x90);
} // namespace physics
using physicsCollisionPresetDefinition = physics::CollisionPresetDefinition;
} // namespace RED4ext

// clang-format on
