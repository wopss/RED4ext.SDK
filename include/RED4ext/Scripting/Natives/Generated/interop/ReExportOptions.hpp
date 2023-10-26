#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/AbsolutePathSerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace interop
{
struct __declspec(align(0x10)) ReExportOptions
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
    uint8_t unk1A8[0x1CB - 0x1A8]; // 1A8
    bool generatePlayerBlockingCollision; // 1CB
    uint8_t unk1CC[0x1D0 - 0x1CC]; // 1CC
    CString baseType; // 1D0
    uint8_t unk1F0[0x210 - 0x1F0]; // 1F0
    Box exportBounds; // 210
    double minBBoxDiag; // 230
    double asBBoxThreshold; // 238
    double asBBoxPrefabsThreshold; // 240
    double asBBoxPrefabsSubdivide; // 248
    bool asBBoxPrefabsForceLast; // 250
    bool skipCollisions; // 251
    uint8_t unk252[0x254 - 0x252]; // 252
    Vector3 referencePoint; // 254
    uint8_t unk260[0x2B4 - 0x260]; // 260
    float preferSmallProxiesTreshold; // 2B4
    DynArray<CString> assetPaths; // 2B8
    uint8_t prefabType; // 2C8
    bool onlyProxy; // 2C9
    bool proxyFromProxy; // 2CA
    bool exportMaterials; // 2CB
    bool exportTextures; // 2CC
    uint8_t unk2CD[0x2D0 - 0x2CD]; // 2CD
};
RED4EXT_ASSERT_SIZE(ReExportOptions, 0x2D0);
} // namespace interop
using interopReExportOptions = interop::ReExportOptions;
} // namespace RED4ext

// clang-format on
