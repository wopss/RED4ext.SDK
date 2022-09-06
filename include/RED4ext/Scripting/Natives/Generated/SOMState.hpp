#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/PSODescBlendModeDesc.hpp>
#include <RED4ext/Scripting/Natives/Generated/PSODescDepthStencilModeDesc.hpp>
#include <RED4ext/Scripting/Natives/Generated/PSODescRasterizerModeDesc.hpp>

namespace RED4ext
{
struct SOMState
{
    static constexpr const char* NAME = "SOMState";
    static constexpr const char* ALIAS = NAME;

    PSODescDepthStencilModeDesc depthStencilModeDesc; // 00
    PSODescRasterizerModeDesc rasterizerModeDesc; // 08
    PSODescBlendModeDesc blendModeDesc; // 10
    uint8_t stencilReadMask; // 53
    uint8_t stencilWriteMask; // 54
    uint8_t stencilRef; // 55
};
RED4EXT_ASSERT_SIZE(SOMState, 0x56);
} // namespace RED4ext

// clang-format on
