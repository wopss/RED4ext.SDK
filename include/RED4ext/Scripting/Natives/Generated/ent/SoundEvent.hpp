#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudParameter.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudSwitch.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct SoundEvent : red::Event
{
    static constexpr const char* NAME = "entSoundEvent";
    static constexpr const char* ALIAS = NAME;

    CName eventName; // 40
    DynArray<audio::AudSwitch> switches; // 48
    DynArray<audio::AudParameter> params; // 58
    DynArray<CName> dynamicParams; // 68
};
RED4EXT_ASSERT_SIZE(SoundEvent, 0x78);
} // namespace ent
using entSoundEvent = ent::SoundEvent;
} // namespace RED4ext

// clang-format on
