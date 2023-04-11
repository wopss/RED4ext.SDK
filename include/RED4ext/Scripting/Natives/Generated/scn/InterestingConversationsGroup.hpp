#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace quest { struct IBaseCondition; }
namespace scn { struct InterestingConversationData; }

namespace scn
{
struct InterestingConversationsGroup : ISerializable
{
    static constexpr const char* NAME = "scnInterestingConversationsGroup";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IBaseCondition> condition; // 30
    DynArray<Handle<scn::InterestingConversationData>> conversations; // 40
};
RED4EXT_ASSERT_SIZE(InterestingConversationsGroup, 0x50);
} // namespace scn
using scnInterestingConversationsGroup = scn::InterestingConversationsGroup;
} // namespace RED4ext

// clang-format on
