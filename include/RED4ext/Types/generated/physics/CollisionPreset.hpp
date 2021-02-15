#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace physics { 
struct CollisionPreset : ISerializable
{
    static constexpr const char* NAME = "physicsCollisionPreset";
    static constexpr const char* ALIAS = NAME;

    CName Name; // 30
    bool ForceEnableCollisionCallbacks; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    DynArray<CName> CollisionType; // 40
    DynArray<CName> CollisionMask; // 50
    DynArray<CName> QueryDetect; // 60
};
RED4EXT_ASSERT_SIZE(CollisionPreset, 0x70);
} // namespace physics
} // namespace RED4ext
