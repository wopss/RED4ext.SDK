#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IRenderProxyCustomData.hpp>

namespace RED4ext
{
struct RenderProxyCustomData_Skinning : IRenderProxyCustomData
{
    static constexpr const char* NAME = "RenderProxyCustomData_Skinning";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk10[0x30 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(RenderProxyCustomData_Skinning, 0x30);
} // namespace RED4ext

// clang-format on
