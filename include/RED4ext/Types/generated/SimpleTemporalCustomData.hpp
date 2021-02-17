#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ICameraStorageCustomData.hpp>

namespace RED4ext
{
struct SimpleTemporalCustomData : ICameraStorageCustomData
{
    static constexpr const char* NAME = "SimpleTemporalCustomData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0x98 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(SimpleTemporalCustomData, 0x98);
} // namespace RED4ext
