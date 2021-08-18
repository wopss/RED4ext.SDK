#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ICameraStorageCustomData.hpp>

namespace RED4ext
{
struct CameraCustomData_Histogram : ICameraStorageCustomData
{
    static constexpr const char* NAME = "CameraCustomData_Histogram";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0x28 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(CameraCustomData_Histogram, 0x28);
} // namespace RED4ext
