#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AICommandParams.hpp>

namespace RED4ext
{
namespace quest { struct UniversalRef; }

namespace quest { 
struct TeleportPuppetParamsV1 : quest::AICommandParams
{
    static constexpr const char* NAME = "questTeleportPuppetParamsV1";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::UniversalRef> destinationRef; // 40
    Vector3 destinationOffset; // 50
    bool doNavTest; // 5C
    bool resetLookAt; // 5D
    bool useFastTravelMechanism; // 5E
    bool healAtTeleport; // 5F
};
RED4EXT_ASSERT_SIZE(TeleportPuppetParamsV1, 0x60);
} // namespace quest
} // namespace RED4ext
