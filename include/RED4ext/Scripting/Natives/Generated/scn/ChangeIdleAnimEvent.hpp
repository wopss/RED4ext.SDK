#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FacialEmotionTransitionBaked.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PlayAnimEvent.hpp>

namespace RED4ext
{
namespace scn
{
struct ChangeIdleAnimEvent : scn::PlayAnimEvent
{
    static constexpr const char* NAME = "scnChangeIdleAnimEvent";
    static constexpr const char* ALIAS = NAME;

    CName idleAnimName; // A0
    CName addIdleAnimName; // A8
    bool isEnabled; // B0
    uint8_t unkB1[0xB8 - 0xB1]; // B1
    CName animName; // B8
    anim::FacialEmotionTransitionBaked bakedFacialTransition; // C0
    bool facialInstantTransition; // 100
    uint8_t unk101[0x108 - 0x101]; // 101
};
RED4EXT_ASSERT_SIZE(ChangeIdleAnimEvent, 0x108);
} // namespace scn
using scnChangeIdleAnimEvent = scn::ChangeIdleAnimEvent;
} // namespace RED4ext

// clang-format on
