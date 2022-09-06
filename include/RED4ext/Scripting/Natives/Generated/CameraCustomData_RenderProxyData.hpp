#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ICameraStorageCustomData.hpp>

namespace RED4ext
{
struct CameraCustomData_RenderProxyData : ICameraStorageCustomData
{
    static constexpr const char* NAME = "CameraCustomData_RenderProxyData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0x60 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(CameraCustomData_RenderProxyData, 0x60);
} // namespace RED4ext

// clang-format on
