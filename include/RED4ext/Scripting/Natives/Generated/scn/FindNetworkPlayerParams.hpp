#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn { 
struct FindNetworkPlayerParams
{
    static constexpr const char* NAME = "scnFindNetworkPlayerParams";
    static constexpr const char* ALIAS = NAME;

    uint32_t networkId; // 00
};
RED4EXT_ASSERT_SIZE(FindNetworkPlayerParams, 0x4);
} // namespace scn
} // namespace RED4ext
