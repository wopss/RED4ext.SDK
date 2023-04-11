#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace anim { struct AnimEvent; }

namespace scn
{
struct AnimationRidAudioData : ISerializable
{
    static constexpr const char* NAME = "scnAnimationRidAudioData";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<anim::AnimEvent>> events; // 30
};
RED4EXT_ASSERT_SIZE(AnimationRidAudioData, 0x40);
} // namespace scn
using scnAnimationRidAudioData = scn::AnimationRidAudioData;
} // namespace RED4ext

// clang-format on
