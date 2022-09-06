#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/PSODescDepthStencilModeComparisonMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/PSODescDepthStencilModeStencilOpMode.hpp>

namespace RED4ext
{
struct PSODescStencilFuncDesc
{
    static constexpr const char* NAME = "PSODescStencilFuncDesc";
    static constexpr const char* ALIAS = NAME;

    PSODescDepthStencilModeStencilOpMode stencilPassOp; // 00
    PSODescDepthStencilModeComparisonMode stencilFunc; // 01
};
RED4EXT_ASSERT_SIZE(PSODescStencilFuncDesc, 0x2);
} // namespace RED4ext

// clang-format on
