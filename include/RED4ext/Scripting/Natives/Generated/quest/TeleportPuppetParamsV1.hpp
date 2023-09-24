#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AICommandParams.hpp>

namespace RED4ext
{
namespace quest { struct UniversalRef; }

namespace quest
{
struct TeleportPuppetParamsV1 : quest::AICommandParams
{
    static constexpr const char* NAME = "questTeleportPuppetParamsV1";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::UniversalRef> destinationRef; // 40
    Vector3 destinationOffset; // 50
    bool doNavTest; // 5C
    bool useFastTravelMechanism; // 5D
    bool healAtTeleport; // 5E
    uint8_t unk5F[0x68 - 0x5F]; // 5F
};
RED4EXT_ASSERT_SIZE(TeleportPuppetParamsV1, 0x68);
} // namespace quest
using questTeleportPuppetParamsV1 = quest::TeleportPuppetParamsV1;
} // namespace RED4ext

// clang-format on
