#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace rend
{
struct __declspec(align(0x10)) FragmentBuilderScriptProxy
{
    static constexpr const char* NAME = "rendFragmentBuilderScriptProxy";
    static constexpr const char* ALIAS = "FragmentBuilder";

    uint8_t unk00[0x40560 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(FragmentBuilderScriptProxy, 0x40560);
} // namespace rend
using rendFragmentBuilderScriptProxy = rend::FragmentBuilderScriptProxy;
using FragmentBuilder = rend::FragmentBuilderScriptProxy;
} // namespace RED4ext

// clang-format on
