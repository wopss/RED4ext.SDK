#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AICommandNodeBase.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/LookAtAction.hpp>

namespace RED4ext
{
namespace quest { struct PlayerLookAtParams; }
namespace quest { struct TeleportPuppetParamsV1; }
namespace quest { struct UniversalRef; }

namespace quest
{
struct TeleportPuppetNodeDefinition : quest::AICommandNodeBase
{
    static constexpr const char* NAME = "questTeleportPuppetNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x50 - 0x48]; // 48
    Handle<quest::UniversalRef> entityReference; // 50
    Handle<quest::TeleportPuppetParamsV1> params; // 60
    quest::LookAtAction lookAtAction; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
    Handle<quest::PlayerLookAtParams> playerLookAt; // 78
};
RED4EXT_ASSERT_SIZE(TeleportPuppetNodeDefinition, 0x88);
} // namespace quest
using questTeleportPuppetNodeDefinition = quest::TeleportPuppetNodeDefinition;
} // namespace RED4ext

// clang-format on
