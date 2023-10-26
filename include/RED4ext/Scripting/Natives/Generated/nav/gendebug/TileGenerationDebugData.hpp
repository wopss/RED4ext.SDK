#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/nav/gendebug/ContourSet.hpp>
#include <RED4ext/Scripting/Natives/Generated/nav/gendebug/Heightfield.hpp>
#include <RED4ext/Scripting/Natives/Generated/nav/gendebug/PolyMesh.hpp>

namespace RED4ext
{
namespace nav::gendebug
{
struct __declspec(align(0x10)) TileGenerationDebugData : ISerializable
{
    static constexpr const char* NAME = "navgendebugTileGenerationDebugData";
    static constexpr const char* ALIAS = NAME;

    uint32_t tileIndex; // 30
    uint8_t unk34[0x40 - 0x34]; // 34
    nav::gendebug::Heightfield heightfield; // 40
    nav::gendebug::ContourSet contours; // 140
    nav::gendebug::PolyMesh polyMesh; // 190
};
RED4EXT_ASSERT_SIZE(TileGenerationDebugData, 0x220);
} // namespace nav::gendebug
using navgendebugTileGenerationDebugData = nav::gendebug::TileGenerationDebugData;
} // namespace RED4ext

// clang-format on
