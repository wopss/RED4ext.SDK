#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EMeshParticleOrientationMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleDrawer.hpp>

namespace RED4ext
{
struct CMesh;

struct CParticleDrawerMesh : IParticleDrawer
{
    static constexpr const char* NAME = "CParticleDrawerMesh";
    static constexpr const char* ALIAS = NAME;

    DynArray<Ref<CMesh>> meshes; // 38
    EMeshParticleOrientationMode orientationMode; // 48
    bool useBatchedRender; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
};
RED4EXT_ASSERT_SIZE(CParticleDrawerMesh, 0x50);
} // namespace RED4ext

// clang-format on
