#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace net
{
struct IEntityState
{
    static constexpr const char* NAME = "netIEntityState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x38 - 0x0]; // 0
    uint64_t persistentID; // 38
    TweakDBID recordID; // 40
    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(IEntityState, 0x50);
} // namespace net
using netIEntityState = net::IEntityState;
} // namespace RED4ext

// clang-format on
