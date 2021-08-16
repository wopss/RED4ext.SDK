#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/game/CommunityID.hpp>
#include <RED4ext/Types/generated/world/CommunityEntryInitialState.hpp>

namespace RED4ext
{
namespace community { struct CommunityTemplateData; }

namespace world { 
struct CommunityRegistryItem
{
    static constexpr const char* NAME = "worldCommunityRegistryItem";
    static constexpr const char* ALIAS = NAME;

    DynArray<world::CommunityEntryInitialState> entriesInitialState; // 00
    Handle<community::CommunityTemplateData> template_; // 10 -- template
    game::CommunityID communityId; // 20
    bool communityIsBackground; // 28
    uint8_t unk29[0x30 - 0x29]; // 29
};
RED4EXT_ASSERT_SIZE(CommunityRegistryItem, 0x30);
} // namespace world
} // namespace RED4ext
