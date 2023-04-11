#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/tempshit/IJournalNodeType.hpp>

namespace RED4ext
{
namespace tempshit
{
struct JournalEntryNodeType : tempshit::IJournalNodeType
{
    static constexpr const char* NAME = "tempshitJournalEntryNodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(JournalEntryNodeType, 0x30);
} // namespace tempshit
using tempshitJournalEntryNodeType = tempshit::JournalEntryNodeType;
} // namespace RED4ext

// clang-format on
