#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>

namespace RED4ext
{
struct CResource;
namespace gsm { struct MainQuest; }
namespace world { struct World; }

namespace gsm
{
struct GameDefinition : CResource
{
    static constexpr const char* NAME = "gsmGameDefinition";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<gsm::MainQuest>> mainQuests; // 40
    RaRef<world::World> world; // 50
    RaRef<CResource> streamingWorld; // 58
    CString worldName; // 60
    red::TagList spawnPointTags; // 80
};
RED4EXT_ASSERT_SIZE(GameDefinition, 0x90);
} // namespace gsm
using gsmGameDefinition = gsm::GameDefinition;
} // namespace RED4ext

// clang-format on
