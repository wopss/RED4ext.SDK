#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/PSODescBlendModeDesc.hpp>
#include <RED4ext/Scripting/Natives/Generated/PSODescDepthStencilModeDesc.hpp>
#include <RED4ext/Scripting/Natives/Generated/PSODescRasterizerModeDesc.hpp>

namespace RED4ext
{
struct MaterialPass
{
    static constexpr const char* NAME = "MaterialPass";
    static constexpr const char* ALIAS = NAME;

    CName stagePassNameRegular; // 00
    CName stagePassNameDiscarded; // 08
    PSODescDepthStencilModeDesc depthStencilMode; // 10
    PSODescRasterizerModeDesc rasterizerMode; // 18
    PSODescBlendModeDesc blendMode; // 20
    uint8_t stencilReadMask; // 63
    uint8_t stencilWriteMask; // 64
    uint8_t stencilRef; // 65
    uint8_t orderIndex; // 66
    bool enablePixelShader; // 67
};
RED4EXT_ASSERT_SIZE(MaterialPass, 0x68);
} // namespace RED4ext

// clang-format on
