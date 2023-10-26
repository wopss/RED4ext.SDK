#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IRenderProxyCustomData.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) RenderProxyCustomData_Mirror : IRenderProxyCustomData
{
    static constexpr const char* NAME = "RenderProxyCustomData_Mirror";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk10[0x40 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(RenderProxyCustomData_Mirror, 0x40);
} // namespace RED4ext

// clang-format on
