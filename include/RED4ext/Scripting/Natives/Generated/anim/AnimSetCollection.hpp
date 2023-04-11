#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimWrapperVariableDescription.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/OverrideAnimSetRef.hpp>

namespace RED4ext
{
namespace anim { struct AnimSet; }

namespace anim
{
struct AnimSetCollection
{
    static constexpr const char* NAME = "animAnimSetCollection";
    static constexpr const char* ALIAS = NAME;

    DynArray<RaRef<anim::AnimSet>> animSets; // 00
    DynArray<anim::OverrideAnimSetRef> overrideAnimSets; // 10
    DynArray<anim::AnimWrapperVariableDescription> animWrapperVariables; // 20
};
RED4EXT_ASSERT_SIZE(AnimSetCollection, 0x30);
} // namespace anim
using animAnimSetCollection = anim::AnimSetCollection;
} // namespace RED4ext

// clang-format on
