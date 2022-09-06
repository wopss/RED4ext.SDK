#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EMaterialShadingRateMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/EMaterialVertexFactory.hpp>
#include <RED4ext/Scripting/Natives/Generated/IMaterial.hpp>

namespace RED4ext
{
struct IMaterialDefinition : IMaterial
{
    static constexpr const char* NAME = "IMaterialDefinition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0xB8 - 0x78]; // 78
    DynArray<EMaterialVertexFactory> vertexFactories; // B8
    NativeArray<uint32_t, 3> paramBlockSize; // C8
    bool canHaveTangentUpdate; // D4
    bool canHaveDismemberment; // D5
    bool hasDPL; // D6
    bool canBeMasked; // D7
    EMaterialShadingRateMode shadingRateMode; // D8
    uint8_t materialVersion; // D9
    uint8_t unkDA[0xE0 - 0xDA]; // DA
};
RED4EXT_ASSERT_SIZE(IMaterialDefinition, 0xE0);
} // namespace RED4ext

// clang-format on
