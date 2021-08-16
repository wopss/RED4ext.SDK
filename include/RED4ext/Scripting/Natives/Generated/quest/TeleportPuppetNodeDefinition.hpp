#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AICommandNodeBase.hpp>

namespace RED4ext
{
namespace quest { struct TeleportPuppetParamsV1; }
namespace quest { struct UniversalRef; }

namespace quest { 
struct TeleportPuppetNodeDefinition : quest::AICommandNodeBase
{
    static constexpr const char* NAME = "questTeleportPuppetNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::UniversalRef> entityReference; // 48
    Handle<quest::TeleportPuppetParamsV1> params; // 58
};
RED4EXT_ASSERT_SIZE(TeleportPuppetNodeDefinition, 0x68);
} // namespace quest
} // namespace RED4ext
