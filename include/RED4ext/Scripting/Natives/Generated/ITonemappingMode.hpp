#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct ITonemappingMode : ISerializable
{
    static constexpr const char* NAME = "ITonemappingMode";
    static constexpr const char* ALIAS = NAME;

    CurveData<float> colorPreservation; // 30
    uint8_t unk68[0xD8 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(ITonemappingMode, 0xD8);
} // namespace RED4ext

// clang-format on
