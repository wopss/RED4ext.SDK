#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IRenderProxyCustomData.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) RenderProxyCustomData_MaterialParams : IRenderProxyCustomData
{
    static constexpr const char* NAME = "RenderProxyCustomData_MaterialParams";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk10[0x80 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(RenderProxyCustomData_MaterialParams, 0x80);
} // namespace RED4ext

// clang-format on
