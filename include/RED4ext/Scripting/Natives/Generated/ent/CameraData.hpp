#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) CameraData
{
    static constexpr const char* NAME = "entCameraData";
    static constexpr const char* ALIAS = "CameraData";

    uint8_t unk00[0x10 - 0x0]; // 0
    Quaternion rotation; // 10
    uint8_t unk20[0x90 - 0x20]; // 20
};
RED4EXT_ASSERT_SIZE(CameraData, 0x90);
} // namespace ent
using entCameraData = ent::CameraData;
using CameraData = ent::CameraData;
} // namespace RED4ext

// clang-format on
