#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/EDynamicDecalSpawnPriority.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderDynamicDecalAtlas.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderDynamicDecalProjection.hpp>

namespace RED4ext
{
struct IEvaluatorFloat;
struct IMaterial;

struct CDecalSpawner : ISerializable
{
    static constexpr const char* NAME = "CDecalSpawner";
    static constexpr const char* ALIAS = NAME;

    Ref<IMaterial> materialStatic; // 30
    Ref<IMaterial> materialSkinned; // 48
    Color specularColor; // 60
    float specularScale; // 64
    float specularBase; // 68
    float specularity; // 6C
    float roughnessScale; // 70
    float normalThreshold; // 74
    bool additiveNormals; // 78
    Color diffuseRandomColor0; // 79
    Color diffuseRandomColor1; // 7D
    uint8_t unk81[0x84 - 0x81]; // 81
    ERenderDynamicDecalAtlas subUVType; // 84
    float farZ; // 88
    float nearZ; // 8C
    Handle<IEvaluatorFloat> size; // 90
    float depthFadePower; // A0
    float normalFadeBias; // A4
    float normalFadeScale; // A8
    bool doubleSided; // AC
    uint8_t unkAD[0xB0 - 0xAD]; // AD
    ERenderDynamicDecalProjection projectionMode; // B0
    uint8_t unkB4[0xB8 - 0xB4]; // B4
    Handle<IEvaluatorFloat> decalLifetime; // B8
    float decalFadeTime; // C8
    float decalFadeInTime; // CC
    bool projectOnStatic; // D0
    bool projectOnSkinned; // D1
    uint8_t unkD2[0xD4 - 0xD2]; // D2
    float startScale; // D4
    float scaleTime; // D8
    bool useVerticalProjection; // DC
    uint8_t unkDD[0xE0 - 0xDD]; // DD
    EDynamicDecalSpawnPriority spawnPriority; // E0
    float autoHideDistance; // E4
};
RED4EXT_ASSERT_SIZE(CDecalSpawner, 0xE8);
} // namespace RED4ext

// clang-format on
