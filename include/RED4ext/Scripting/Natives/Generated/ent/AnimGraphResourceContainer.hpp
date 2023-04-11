#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/AnimGraphResourceContainerEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace ent
{
struct AnimGraphResourceContainer : ent::IComponent
{
    static constexpr const char* NAME = "entAnimGraphResourceContainer";
    static constexpr const char* ALIAS = NAME;

    DynArray<ent::AnimGraphResourceContainerEntry> animGraphLookupTable; // 90
};
RED4EXT_ASSERT_SIZE(AnimGraphResourceContainer, 0xA0);
} // namespace ent
using entAnimGraphResourceContainer = ent::AnimGraphResourceContainer;
} // namespace RED4ext

// clang-format on
