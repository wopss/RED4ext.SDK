#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace interop
{
struct SelectByDefinitionOptions
{
    static constexpr const char* NAME = "interopSelectByDefinitionOptions";
    static constexpr const char* ALIAS = NAME;

    bool searchInSelection; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    float minBBoxDiagonalLength; // 04
    float maxBBoxDiagonalLength; // 08
    float maxBBoxParentPercantageDiagonalLength; // 0C
    bool includePrefabNodes; // 10
    bool includeDecalNodes; // 11
    bool includeMeshNodes; // 12
    uint8_t unk13[0x14 - 0x13]; // 13
};
RED4EXT_ASSERT_SIZE(SelectByDefinitionOptions, 0x14);
} // namespace interop
using interopSelectByDefinitionOptions = interop::SelectByDefinitionOptions;
} // namespace RED4ext

// clang-format on
