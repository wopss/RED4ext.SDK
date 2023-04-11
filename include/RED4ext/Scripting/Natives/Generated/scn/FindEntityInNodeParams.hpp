#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace scn
{
struct FindEntityInNodeParams
{
    static constexpr const char* NAME = "scnFindEntityInNodeParams";
    static constexpr const char* ALIAS = NAME;

    NodeRef nodeRef; // 00
    bool forceMaxVisibility; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(FindEntityInNodeParams, 0x10);
} // namespace scn
using scnFindEntityInNodeParams = scn::FindEntityInNodeParams;
} // namespace RED4ext

// clang-format on
