#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalBaseResource.hpp>

namespace RED4ext
{
namespace game
{
struct JournalDescriptorResource : game::JournalBaseResource
{
    static constexpr const char* NAME = "gameJournalDescriptorResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<CString> entriesActivatedAtStart; // 40
};
RED4EXT_ASSERT_SIZE(JournalDescriptorResource, 0x50);
} // namespace game
using gameJournalDescriptorResource = game::JournalDescriptorResource;
} // namespace RED4ext

// clang-format on
