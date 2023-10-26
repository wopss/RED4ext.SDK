#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidTag.hpp>

namespace RED4ext
{
namespace anim { struct Animation; }
namespace anim { struct EventsContainer; }

namespace scn
{
struct __declspec(align(0x10)) AnimationRid
{
    static constexpr const char* NAME = "scnAnimationRid";
    static constexpr const char* ALIAS = NAME;

    scn::RidTag tag; // 00
    Handle<anim::Animation> animation; // 10
    Handle<anim::EventsContainer> events; // 20
    bool motionExtracted; // 30
    uint8_t unk31[0x40 - 0x31]; // 31
    Transform offset; // 40
    uint32_t bonesCount; // 60
    int32_t trajectoryBoneIndex; // 64
    uint8_t unk68[0x80 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(AnimationRid, 0x80);
} // namespace scn
using scnAnimationRid = scn::AnimationRid;
} // namespace RED4ext

// clang-format on
