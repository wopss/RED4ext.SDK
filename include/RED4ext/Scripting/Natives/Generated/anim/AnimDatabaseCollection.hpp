#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimDatabaseCollectionEntry.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimDatabaseCollection
{
    static constexpr const char* NAME = "animAnimDatabaseCollection";
    static constexpr const char* ALIAS = NAME;

    DynArray<anim::AnimDatabaseCollectionEntry> animDatabases; // 00
};
RED4EXT_ASSERT_SIZE(AnimDatabaseCollection, 0x10);
} // namespace anim
using animAnimDatabaseCollection = anim::AnimDatabaseCollection;
} // namespace RED4ext

// clang-format on
