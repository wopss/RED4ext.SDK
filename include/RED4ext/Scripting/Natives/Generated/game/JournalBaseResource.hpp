#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
namespace game
{
struct JournalBaseResource : CResource
{
    static constexpr const char* NAME = "gameJournalBaseResource";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(JournalBaseResource, 0x40);
} // namespace game
using gameJournalBaseResource = game::JournalBaseResource;
} // namespace RED4ext

// clang-format on
