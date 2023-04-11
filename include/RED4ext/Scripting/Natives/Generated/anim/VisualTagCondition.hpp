#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IStaticCondition.hpp>

namespace RED4ext
{
namespace anim
{
struct VisualTagCondition : anim::IStaticCondition
{
    static constexpr const char* NAME = "animVisualTagCondition";
    static constexpr const char* ALIAS = NAME;

    CName visualTag; // 30
};
RED4EXT_ASSERT_SIZE(VisualTagCondition, 0x38);
} // namespace anim
using animVisualTagCondition = anim::VisualTagCondition;
} // namespace RED4ext

// clang-format on
