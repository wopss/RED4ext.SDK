#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IMultiplayerHeistNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct SetMultiplayerHeistSpawnPointTag_NodeType : quest::IMultiplayerHeistNodeType
{
    static constexpr const char* NAME = "questSetMultiplayerHeistSpawnPointTag_NodeType";
    static constexpr const char* ALIAS = NAME;

    CName spawnPointTag; // 30
};
RED4EXT_ASSERT_SIZE(SetMultiplayerHeistSpawnPointTag_NodeType, 0x38);
} // namespace quest
} // namespace RED4ext
