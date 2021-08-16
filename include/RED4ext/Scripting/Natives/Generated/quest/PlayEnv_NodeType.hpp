#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IEnvironmentManagerNodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/PlayEnv_NodeTypeParams.hpp>

namespace RED4ext
{
namespace quest { 
struct PlayEnv_NodeType : quest::IEnvironmentManagerNodeType
{
    static constexpr const char* NAME = "questPlayEnv_NodeType";
    static constexpr const char* ALIAS = NAME;

    quest::PlayEnv_NodeTypeParams params; // 30
};
RED4EXT_ASSERT_SIZE(PlayEnv_NodeType, 0x58);
} // namespace quest
} // namespace RED4ext
