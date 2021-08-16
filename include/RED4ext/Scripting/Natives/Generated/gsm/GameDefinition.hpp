#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>

namespace RED4ext
{
struct CResource;
namespace quest { struct QuestResource; }
namespace world { struct World; }

namespace gsm { 
struct GameDefinition : CResource
{
    static constexpr const char* NAME = "gsmGameDefinition";
    static constexpr const char* ALIAS = NAME;

    RaRef<quest::QuestResource> mainQuest; // 40
    RaRef<world::World> world; // 48
    RaRef<CResource> streamingWorld; // 50
    CString worldName; // 58
    red::TagList spawnPointTags; // 78
};
RED4EXT_ASSERT_SIZE(GameDefinition, 0x88);
} // namespace gsm
} // namespace RED4ext
