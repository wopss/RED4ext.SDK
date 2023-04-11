#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/CustomEmitterMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct SecurityTurretMetadata : audio::CustomEmitterMetadata
{
    static constexpr const char* NAME = "audioSecurityTurretMetadata";
    static constexpr const char* ALIAS = NAME;

    CName singleFire; // 38
    CName activated; // 40
    CName deactivaed; // 48
    CName destroyed; // 50
    CName idleStart; // 58
    CName idleStop; // 60
    CName triggerEffectSingle; // 68
    CName triggerEffectAuto; // 70
    bool obstructionEnabled; // 78
    bool occlusionEnabled; // 79
    uint8_t unk7A[0x80 - 0x7A]; // 7A
};
RED4EXT_ASSERT_SIZE(SecurityTurretMetadata, 0x80);
} // namespace audio
using audioSecurityTurretMetadata = audio::SecurityTurretMetadata;
} // namespace RED4ext

// clang-format on
