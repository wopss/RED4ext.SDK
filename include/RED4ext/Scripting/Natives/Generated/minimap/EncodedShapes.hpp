#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace minimap
{
struct EncodedShapes : CResource
{
    static constexpr const char* NAME = "minimapEncodedShapes";
    static constexpr const char* ALIAS = NAME;

    DataBuffer Buffer; // 40
    Vector2 QuantizationScale; // 68
    Vector2 QuantizationBias; // 70
    Vector3 BoxQuantizationScale; // 78
    Vector3 BoxQuantizationBias; // 84
    uint32_t NumPoints; // 90
    uint32_t NumBorderPoints; // 94
    uint32_t NumFillPoints; // 98
    uint32_t NumShapes; // 9C
    uint32_t NumSpatialBuckets; // A0
    uint32_t NumUniqueGeometry; // A4
    uint32_t NumOwners; // A8
    uint32_t Version; // AC
};
RED4EXT_ASSERT_SIZE(EncodedShapes, 0xB0);
} // namespace minimap
using minimapEncodedShapes = minimap::EncodedShapes;
} // namespace RED4ext

// clang-format on
