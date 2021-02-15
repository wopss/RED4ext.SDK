#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/AbsolutePathSerializable.hpp>
#include <RED4ext/Types/generated/Box.hpp>
#include <RED4ext/Types/generated/Vector3.hpp>

namespace RED4ext
{
namespace interop { 
struct ReExportOptions
{
    static constexpr const char* NAME = "interopReExportOptions";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> occlusionExportOptNames; // 00
    DynArray<bool> occlusionExportOptValues; // 10
    DynArray<bool> typeExportOptions; // 20
    CString filePath; // 30
    DynArray<CString> files; // 50
    CString depotPath; // 60
    AbsolutePathSerializable maskDumpFilePath; // 80
    AbsolutePathSerializable jsonFile; // A0
    bool runDispatcher; // C0
    uint8_t unkC1[0xC8 - 0xC1]; // C1
    CString hjobToken; // C8
    CString hjobParams; // E8
    CString hjobParamsOutput; // 108
    CString assetName; // 128
    CString rigs; // 148
    CString hjobTemplate; // 168
    CString bodyType; // 188
    uint8_t unk1A8[0x1B0 - 0x1A8]; // 1A8
    CString baseType; // 1B0
    uint8_t unk1D0[0x1F0 - 0x1D0]; // 1D0
    Box exportBounds; // 1F0
    double minBBoxDiag; // 210
    double asBBoxThreshold; // 218
    double asBBoxPrefabsThreshold; // 220
    double asBBoxPrefabsSubdivide; // 228
    bool asBBoxPrefabsForceLast; // 230
    bool skipCollisions; // 231
    uint8_t unk232[0x234 - 0x232]; // 232
    Vector3 referencePoint; // 234
    uint8_t unk240[0x294 - 0x240]; // 240
    float preferSmallProxiesTreshold; // 294
    DynArray<CString> assetPaths; // 298
    uint8_t prefabType; // 2A8
    bool onlyProxy; // 2A9
    bool proxyFromProxy; // 2AA
    bool exportMaterials; // 2AB
    bool exportTextures; // 2AC
    uint8_t unk2AD[0x2B0 - 0x2AD]; // 2AD
};
RED4EXT_ASSERT_SIZE(ReExportOptions, 0x2B0);
} // namespace interop
} // namespace RED4ext
