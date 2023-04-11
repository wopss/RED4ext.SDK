#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/DisableableNodeDefinition.hpp>

namespace RED4ext
{
namespace tempshit
{
struct JournalNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "tempshitJournalNodeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(JournalNodeDefinition, 0x48);
} // namespace tempshit
using tempshitJournalNodeDefinition = tempshit::JournalNodeDefinition;
} // namespace RED4ext

// clang-format on
