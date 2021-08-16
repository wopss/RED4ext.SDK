#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/EMaterialVertexFactory.hpp>
#include <RED4ext/Types/generated/IMaterial.hpp>

namespace RED4ext
{
struct IMaterialDefinition : IMaterial
{
    static constexpr const char* NAME = "IMaterialDefinition";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0xB8 - 0x78]; // 78
    DynArray<EMaterialVertexFactory> vertexFactories; // B8
    NativeArray<uint32_t, 3> paramBlockSize; // C8
    bool compileAllTechniques; // D4
    bool canHaveTangentUpdate; // D5
    bool canHaveDismemberment; // D6
    bool hasDPL; // D7
    uint8_t materialVersion; // D8
    uint8_t unkD9[0xE0 - 0xD9]; // D9
};
RED4EXT_ASSERT_SIZE(IMaterialDefinition, 0xE0);
} // namespace RED4ext
