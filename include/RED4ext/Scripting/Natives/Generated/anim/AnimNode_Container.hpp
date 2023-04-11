#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>

namespace RED4ext
{
namespace anim { struct AnimNode_Base; }

namespace anim
{
struct AnimNode_Container : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_Container";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<anim::AnimNode_Base>> nodes; // 48
};
RED4EXT_ASSERT_SIZE(AnimNode_Container, 0x58);
} // namespace anim
using animAnimNode_Container = anim::AnimNode_Container;
} // namespace RED4ext

// clang-format on
