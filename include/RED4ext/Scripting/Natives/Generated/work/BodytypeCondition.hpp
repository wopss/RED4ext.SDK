#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IWorkspotCondition.hpp>

namespace RED4ext
{
namespace anim { struct Rig; }

namespace work
{
struct BodytypeCondition : work::IWorkspotCondition
{
    static constexpr const char* NAME = "workBodytypeCondition";
    static constexpr const char* ALIAS = NAME;

    RaRef<anim::Rig> rig; // 38
};
RED4EXT_ASSERT_SIZE(BodytypeCondition, 0x40);
} // namespace work
using workBodytypeCondition = work::BodytypeCondition;
} // namespace RED4ext

// clang-format on
