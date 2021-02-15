#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ICameraStorageCustomData.hpp>

namespace RED4ext
{
struct VolCloudsCustomData : ICameraStorageCustomData
{
    static constexpr const char* NAME = "VolCloudsCustomData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0x48 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(VolCloudsCustomData, 0x48);
} // namespace RED4ext
