#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Matrix.hpp>
#include <RED4ext/Scripting/Natives/Generated/MorphTargetsFaceRegion.hpp>

namespace RED4ext
{
struct MorphTargetMeshEntry
{
    static constexpr const char* NAME = "MorphTargetMeshEntry";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    CName regionName; // 08
    MorphTargetsFaceRegion faceRegion; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
    DynArray<CName> boneNames; // 18
    DynArray<Matrix> boneRigMatrices; // 28
};
RED4EXT_ASSERT_SIZE(MorphTargetMeshEntry, 0x38);
} // namespace RED4ext

// clang-format on
