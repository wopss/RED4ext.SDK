#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/ICameraStorageCustomData.hpp>

namespace RED4ext
{
struct RayTracingCustomData : ICameraStorageCustomData
{
    static constexpr const char* NAME = "RayTracingCustomData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0x1E0 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(RayTracingCustomData, 0x1E0);
} // namespace RED4ext
