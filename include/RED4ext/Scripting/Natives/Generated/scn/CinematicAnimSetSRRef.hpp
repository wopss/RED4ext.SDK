#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace anim { struct AnimSet; }

namespace scn
{
struct CinematicAnimSetSRRef
{
    static constexpr const char* NAME = "scnCinematicAnimSetSRRef";
    static constexpr const char* ALIAS = NAME;

    RaRef<anim::AnimSet> asyncAnimSet; // 00
    uint8_t priority; // 08
    bool isOverride; // 09
    uint8_t unk0A[0x10 - 0xA]; // A
};
RED4EXT_ASSERT_SIZE(CinematicAnimSetSRRef, 0x10);
} // namespace scn
using scnCinematicAnimSetSRRef = scn::CinematicAnimSetSRRef;
} // namespace RED4ext

// clang-format on
