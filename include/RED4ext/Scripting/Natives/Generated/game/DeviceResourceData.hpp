#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game
{
struct DeviceResourceData : ISerializable
{
    static constexpr const char* NAME = "gameDeviceResourceData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x60 - 0x30]; // 30
    uint32_t version; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
};
RED4EXT_ASSERT_SIZE(DeviceResourceData, 0x68);
} // namespace game
using gameDeviceResourceData = game::DeviceResourceData;
} // namespace RED4ext

// clang-format on
