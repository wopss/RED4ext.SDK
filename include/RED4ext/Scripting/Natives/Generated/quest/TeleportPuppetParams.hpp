#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace quest { struct UniversalRef; }

namespace quest
{
struct TeleportPuppetParams
{
    static constexpr const char* NAME = "questTeleportPuppetParams";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::UniversalRef> destinationRef; // 00
    Vector3 destinationOffset; // 10
    uint8_t unk1C[0x20 - 0x1C]; // 1C
};
RED4EXT_ASSERT_SIZE(TeleportPuppetParams, 0x20);
} // namespace quest
using questTeleportPuppetParams = quest::TeleportPuppetParams;
} // namespace RED4ext

// clang-format on
