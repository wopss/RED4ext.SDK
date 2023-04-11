#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
namespace ink::anim { struct Sequence; }

namespace ink::anim
{
struct AnimationLibraryResource : CResource
{
    static constexpr const char* NAME = "inkanimAnimationLibraryResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<ink::anim::Sequence>> sequences; // 40
};
RED4EXT_ASSERT_SIZE(AnimationLibraryResource, 0x50);
} // namespace ink::anim
using inkanimAnimationLibraryResource = ink::anim::AnimationLibraryResource;
} // namespace RED4ext

// clang-format on
