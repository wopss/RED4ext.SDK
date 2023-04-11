#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct C2dArray;
namespace anim { struct GenericAnimDatabase; }

namespace anim
{
struct AnimDatabaseCollectionEntry
{
    static constexpr const char* NAME = "animAnimDatabaseCollectionEntry";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    Ref<C2dArray> animDatabase; // 08
    Ref<anim::GenericAnimDatabase> overrideAnimDatabase; // 20
    uint8_t unk38[0x60 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(AnimDatabaseCollectionEntry, 0x60);
} // namespace anim
using animAnimDatabaseCollectionEntry = anim::AnimDatabaseCollectionEntry;
} // namespace RED4ext

// clang-format on
