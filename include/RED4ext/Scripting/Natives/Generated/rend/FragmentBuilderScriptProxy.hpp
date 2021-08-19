#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace rend { 
struct FragmentBuilderScriptProxy
{
    static constexpr const char* NAME = "rendFragmentBuilderScriptProxy";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x40560 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(FragmentBuilderScriptProxy, 0x40560);
} // namespace rend
} // namespace RED4ext
