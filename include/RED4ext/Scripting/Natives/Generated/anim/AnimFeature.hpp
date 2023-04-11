#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimFeature : IScriptable
{
    static constexpr const char* NAME = "animAnimFeature";
    static constexpr const char* ALIAS = "AnimFeature";

};
RED4EXT_ASSERT_SIZE(AnimFeature, 0x40);
} // namespace anim
using animAnimFeature = anim::AnimFeature;
using AnimFeature = anim::AnimFeature;
} // namespace RED4ext

// clang-format on
