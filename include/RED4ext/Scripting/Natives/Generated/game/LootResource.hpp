#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
namespace game { struct LootResourceData; }

namespace game { 
struct LootResource : CResource
{
    static constexpr const char* NAME = "gameLootResource";
    static constexpr const char* ALIAS = NAME;

    Handle<game::LootResourceData> data; // 40
};
RED4EXT_ASSERT_SIZE(LootResource, 0x50);
} // namespace game
} // namespace RED4ext
