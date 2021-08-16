#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/JournalBaseResource.hpp>

namespace RED4ext
{
namespace game { 
struct JournalDescriptorResource : game::JournalBaseResource
{
    static constexpr const char* NAME = "gameJournalDescriptorResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<CString> entriesActivatedAtStart; // 40
};
RED4EXT_ASSERT_SIZE(JournalDescriptorResource, 0x50);
} // namespace game
} // namespace RED4ext
