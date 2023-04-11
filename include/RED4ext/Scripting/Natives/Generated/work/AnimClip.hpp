#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IEntry.hpp>

namespace RED4ext
{
namespace work
{
struct AnimClip : work::IEntry
{
    static constexpr const char* NAME = "workAnimClip";
    static constexpr const char* ALIAS = NAME;

    CName animName; // 38
    float blendOutTime; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(AnimClip, 0x48);
} // namespace work
using workAnimClip = work::AnimClip;
} // namespace RED4ext

// clang-format on
