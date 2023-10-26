#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleDrawer.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) CParticleDrawerFacingBeam : IParticleDrawer
{
    static constexpr const char* NAME = "CParticleDrawerFacingBeam";
    static constexpr const char* ALIAS = NAME;

    float texturesPerUnit; // 38
    bool dynamicTexCoords; // 3C
    uint8_t unk3D[0x40 - 0x3D]; // 3D
    float transparencyOffset; // 40
    float transparencyLength; // 44
    uint32_t numSegments; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    Vector4 sourceTangent; // 50
    Vector4 targetTangent; // 60
    Vector3 debugTargetTranslation; // 70
    uint8_t unk7C[0x80 - 0x7C]; // 7C
};
RED4EXT_ASSERT_SIZE(CParticleDrawerFacingBeam, 0x80);
} // namespace RED4ext

// clang-format on
