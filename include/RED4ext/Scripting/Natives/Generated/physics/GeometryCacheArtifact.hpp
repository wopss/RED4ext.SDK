#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/CacheEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/CacheKey.hpp>

namespace RED4ext
{
namespace physics
{
struct GeometryCacheArtifact : CResource
{
    static constexpr const char* NAME = "physicsGeometryCacheArtifact";
    static constexpr const char* ALIAS = NAME;

    DeferredDataBuffer buffer; // 40
    DynArray<physics::CacheKey> entryKeys; // 98
    DynArray<physics::CacheEntry> entryTable; // A8
};
RED4EXT_ASSERT_SIZE(GeometryCacheArtifact, 0xB8);
} // namespace physics
using physicsGeometryCacheArtifact = physics::GeometryCacheArtifact;
} // namespace RED4ext

// clang-format on
