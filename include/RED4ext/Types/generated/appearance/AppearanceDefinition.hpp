#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/appearance/AppearancePart.hpp>
#include <RED4ext/Types/generated/appearance/AppearancePartOverrides.hpp>
#include <RED4ext/Types/generated/ent/EntityParametersBuffer.hpp>
#include <RED4ext/Types/generated/game/HitRepresentationOverride.hpp>
#include <RED4ext/Types/generated/red/TagList.hpp>

namespace RED4ext
{
struct CMesh;
struct CResource;

namespace appearance { 
struct AppearanceDefinition : ISerializable
{
    static constexpr const char* NAME = "appearanceAppearanceDefinition";
    static constexpr const char* ALIAS = NAME;

    CName name; // 30
    CName parentAppearance; // 38
    DynArray<DynArray<CName>> partsMasks; // 40
    DynArray<appearance::AppearancePart> partsValues; // 50
    RaRef<CMesh> proxyMesh; // 60
    CName proxyMeshAppearance; // 68
    RaRef<CResource> cookedDataPathOverride; // 70
    DynArray<appearance::AppearancePartOverrides> partsOverrides; // 78
    red::TagList visualTags; // 88
    red::TagList inheritedVisualTags; // 98
    DynArray<game::HitRepresentationOverride> hitRepresentationOverrides; // A8
    ent::EntityParametersBuffer parametersBuffer; // B8
    uint32_t censorFlags; // E0
    uint8_t forcedLodDistance; // E4
    uint8_t unkE5[0xF0 - 0xE5]; // E5
    DeferredDataBuffer compiledData; // F0
    uint8_t unk148[0x1B8 - 0x148]; // 148
    DynArray<RaRef<CResource>> resolvedDependencies; // 1B8
    DynArray<RaRef<CResource>> looseDependencies; // 1C8
};
RED4EXT_ASSERT_SIZE(AppearanceDefinition, 0x1D8);
} // namespace appearance
} // namespace RED4ext
