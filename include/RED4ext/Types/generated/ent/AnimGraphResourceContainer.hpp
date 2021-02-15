#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/ent/AnimGraphResourceContainerEntry.hpp>
#include <RED4ext/Types/generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace ent { 
struct AnimGraphResourceContainer : ent::IComponent
{
    static constexpr const char* NAME = "entAnimGraphResourceContainer";
    static constexpr const char* ALIAS = NAME;

    DynArray<ent::AnimGraphResourceContainerEntry> animGraphLookupTable; // 90
};
RED4EXT_ASSERT_SIZE(AnimGraphResourceContainer, 0xA0);
} // namespace ent
} // namespace RED4ext
