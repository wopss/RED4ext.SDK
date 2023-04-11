#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace anim { struct AnimGraph; }

namespace ent
{
struct AnimGraphResourceContainerEntry
{
    static constexpr const char* NAME = "entAnimGraphResourceContainerEntry";
    static constexpr const char* ALIAS = "AnimGraphResourceContainerEntry";

    CName graphName; // 00
    Ref<anim::AnimGraph> animGraphResource; // 08
};
RED4EXT_ASSERT_SIZE(AnimGraphResourceContainerEntry, 0x20);
} // namespace ent
using entAnimGraphResourceContainerEntry = ent::AnimGraphResourceContainerEntry;
using AnimGraphResourceContainerEntry = ent::AnimGraphResourceContainerEntry;
} // namespace RED4ext

// clang-format on
