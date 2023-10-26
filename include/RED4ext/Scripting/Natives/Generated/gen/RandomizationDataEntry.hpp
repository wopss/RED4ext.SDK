#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>

namespace RED4ext
{
namespace gen
{
struct __declspec(align(0x10)) RandomizationDataEntry
{
    static constexpr const char* NAME = "genRandomizationDataEntry";
    static constexpr const char* ALIAS = "RandomizationDataEntry";

    CString id; // 00
    CName templateName; // 20
    float probability; // 28
    uint8_t unk2C[0x30 - 0x2C]; // 2C
    Transform transform; // 30
};
RED4EXT_ASSERT_SIZE(RandomizationDataEntry, 0x50);
} // namespace gen
using genRandomizationDataEntry = gen::RandomizationDataEntry;
using RandomizationDataEntry = gen::RandomizationDataEntry;
} // namespace RED4ext

// clang-format on
