#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace interop
{
struct MaterialListDescriptor
{
    static constexpr const char* NAME = "interopMaterialListDescriptor";
    static constexpr const char* ALIAS = NAME;

    CString chunksInfo; // 00
    CString chunksLODInfo; // 20
    uint32_t numLayers; // 40
    bool isForward; // 44
    bool isMultilayer; // 45
    bool isLocalInstance; // 46
    bool isTemplate; // 47
    CString materialName; // 48
    CString appearanceName; // 68
    DynArray<CString> availableMaterials; // 88
    uint32_t itemMaterialIndex; // 98
    uint8_t unk9C[0xA0 - 0x9C]; // 9C
};
RED4EXT_ASSERT_SIZE(MaterialListDescriptor, 0xA0);
} // namespace interop
using interopMaterialListDescriptor = interop::MaterialListDescriptor;
} // namespace RED4ext

// clang-format on
