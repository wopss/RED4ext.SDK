#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ICameraStorageCustomData.hpp>

namespace RED4ext
{
struct TXAACustomData : ICameraStorageCustomData
{
    static constexpr const char* NAME = "TXAACustomData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0x190 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(TXAACustomData, 0x190);
} // namespace RED4ext
