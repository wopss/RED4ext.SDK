#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/audio/CustomEmitterMetadata.hpp>

namespace RED4ext
{
namespace audio { 
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
    bool obstructionEnabled; // 68
    bool occlusionEnabled; // 69
    uint8_t unk6A[0x70 - 0x6A]; // 6A
};
RED4EXT_ASSERT_SIZE(SecurityTurretMetadata, 0x70);
} // namespace audio
} // namespace RED4ext
