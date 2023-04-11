#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>

namespace RED4ext
{
namespace audio { struct AmbientAreaSettings; }

namespace world
{
struct StaticSoundEmitterNode : world::Node
{
    static constexpr const char* NAME = "worldStaticSoundEmitterNode";
    static constexpr const char* ALIAS = NAME;

    float radius; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    CName audioName; // 40
    Handle<audio::AmbientAreaSettings> Settings; // 48
    bool usePhysicsObstruction; // 58
    bool occlusionEnabled; // 59
    bool acousticRepositioningEnabled; // 5A
    uint8_t unk5B[0x5C - 0x5B]; // 5B
    float obstructionChangeTime; // 5C
    bool useDoppler; // 60
    uint8_t unk61[0x64 - 0x61]; // 61
    float dopplerFactor; // 64
    bool setOpenDoorEmitter; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
    CName emitterMetadataName; // 70
    bool overrideRolloff; // 78
    uint8_t unk79[0x7C - 0x79]; // 79
    float rolloffOverride; // 7C
    CName ambientPaletteTag; // 80
};
RED4EXT_ASSERT_SIZE(StaticSoundEmitterNode, 0x88);
} // namespace world
using worldStaticSoundEmitterNode = world::StaticSoundEmitterNode;
} // namespace RED4ext

// clang-format on
