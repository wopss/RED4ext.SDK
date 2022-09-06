#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Sample_Replicated_Enum.hpp>
#include <RED4ext/Scripting/Natives/Generated/Sample_Replicated_Struct.hpp>

namespace RED4ext
{
struct Sample_Replicated_Serializable;

struct Sample_All_Supported_Replicated_Types
{
    static constexpr const char* NAME = "Sample_All_Supported_Replicated_Types";
    static constexpr const char* ALIAS = NAME;

    bool bool_; // 00 -- bool
    uint8_t uint8; // 01
    int8_t int8; // 02
    uint8_t unk03[0x4 - 0x3]; // 3
    uint16_t uint16; // 04
    int16_t int16; // 06
    uint32_t uint32; // 08
    int32_t int32; // 0C
    uint64_t uint64; // 10
    int64_t int64; // 18
    float float; // 20
    uint8_t unk24[0x28 - 0x24]; // 24
    double double; // 28
    CName name; // 30
    CString string; // 38
    Sample_Replicated_Enum enum; // 58
    Sample_Replicated_Struct struct; // 5C
    DynArray<Sample_Replicated_Struct> dynamicArray; // 60
    StaticArray<Sample_Replicated_Struct, 10> staticArray; // 70
    uint8_t unk9C[0xA8 - 0x9C]; // 9C
    Handle<Sample_Replicated_Serializable> THandle; // A8
};
RED4EXT_ASSERT_SIZE(Sample_All_Supported_Replicated_Types, 0xB8);
} // namespace RED4ext

// clang-format on
