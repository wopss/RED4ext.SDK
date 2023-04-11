#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace anim { struct AnimSet; }

namespace anim
{
struct OverrideAnimSetRef
{
    static constexpr const char* NAME = "animOverrideAnimSetRef";
    static constexpr const char* ALIAS = NAME;

    RaRef<anim::AnimSet> animSet; // 00
    CName variableName; // 08
};
RED4EXT_ASSERT_SIZE(OverrideAnimSetRef, 0x10);
} // namespace anim
using animOverrideAnimSetRef = anim::OverrideAnimSetRef;
} // namespace RED4ext

// clang-format on
