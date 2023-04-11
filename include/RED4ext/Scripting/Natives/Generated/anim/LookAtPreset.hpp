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
struct LookAtPreset : IScriptable
{
    static constexpr const char* NAME = "animLookAtPreset";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(LookAtPreset, 0x40);
} // namespace anim
using animLookAtPreset = anim::LookAtPreset;
} // namespace RED4ext

// clang-format on
