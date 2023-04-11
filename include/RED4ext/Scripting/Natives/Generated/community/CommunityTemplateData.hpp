#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CrowdTemplateEntry.hpp>

namespace RED4ext
{
namespace community { struct SpawnEntry; }

namespace community
{
struct CommunityTemplateData : ISerializable
{
    static constexpr const char* NAME = "communityCommunityTemplateData";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<community::SpawnEntry>> entries; // 30
    DynArray<game::CrowdTemplateEntry> crowdEntries; // 40
    CName spawnSetReference; // 50
};
RED4EXT_ASSERT_SIZE(CommunityTemplateData, 0x58);
} // namespace community
using communityCommunityTemplateData = community::CommunityTemplateData;
} // namespace RED4ext

// clang-format on
