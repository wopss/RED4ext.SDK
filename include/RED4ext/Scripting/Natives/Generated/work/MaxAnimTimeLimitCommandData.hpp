#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IWorkspotCommandData.hpp>

namespace RED4ext
{
namespace work
{
struct MaxAnimTimeLimitCommandData : work::IWorkspotCommandData
{
    static constexpr const char* NAME = "workMaxAnimTimeLimitCommandData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x10 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(MaxAnimTimeLimitCommandData, 0x10);
} // namespace work
using workMaxAnimTimeLimitCommandData = work::MaxAnimTimeLimitCommandData;
} // namespace RED4ext

// clang-format on
