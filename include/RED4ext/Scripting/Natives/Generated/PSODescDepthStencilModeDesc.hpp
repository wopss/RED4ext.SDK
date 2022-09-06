#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/PSODescDepthStencilModeComparisonMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/PSODescStencilFuncDesc.hpp>

namespace RED4ext
{
struct PSODescDepthStencilModeDesc
{
    static constexpr const char* NAME = "PSODescDepthStencilModeDesc";
    static constexpr const char* ALIAS = NAME;

    bool depthTestEnable; // 00
    bool depthWriteEnable; // 01
    PSODescDepthStencilModeComparisonMode depthFunc; // 02
    bool stencilEnable; // 03
    bool stencilReadMask; // 04
    bool stencilWriteMask; // 05
    PSODescStencilFuncDesc frontFace; // 06
};
RED4EXT_ASSERT_SIZE(PSODescDepthStencilModeDesc, 0x8);
} // namespace RED4ext

// clang-format on
