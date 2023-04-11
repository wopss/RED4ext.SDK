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
namespace scn { struct InterestingConversationsGroup; }

namespace scn
{
struct InterestingConversationsResource : CResource
{
    static constexpr const char* NAME = "scnInterestingConversationsResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<scn::InterestingConversationsGroup>> conversationGroups; // 40
};
RED4EXT_ASSERT_SIZE(InterestingConversationsResource, 0x50);
} // namespace scn
using scnInterestingConversationsResource = scn::InterestingConversationsResource;
} // namespace RED4ext

// clang-format on
