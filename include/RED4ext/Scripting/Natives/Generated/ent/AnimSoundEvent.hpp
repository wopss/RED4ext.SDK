#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/SoundEvent.hpp>

namespace RED4ext
{
namespace ent
{
struct AnimSoundEvent : ent::SoundEvent
{
    static constexpr const char* NAME = "entAnimSoundEvent";
    static constexpr const char* ALIAS = NAME;

    CName metadataContext; // 78
};
RED4EXT_ASSERT_SIZE(AnimSoundEvent, 0x80);
} // namespace ent
using entAnimSoundEvent = ent::AnimSoundEvent;
} // namespace RED4ext

// clang-format on
