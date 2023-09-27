#pragma once

// clang-format off

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

    uint8_t unk18[0x1C0 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(TXAACustomData, 0x1C0);
} // namespace RED4ext

// clang-format on
