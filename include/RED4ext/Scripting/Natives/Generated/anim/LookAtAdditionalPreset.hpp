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
struct LookAtAdditionalPreset : IScriptable
{
    static constexpr const char* NAME = "animLookAtAdditionalPreset";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(LookAtAdditionalPreset, 0x40);
} // namespace anim
using animLookAtAdditionalPreset = anim::LookAtAdditionalPreset;
} // namespace RED4ext

// clang-format on
