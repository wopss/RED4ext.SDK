#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/PSODescBlendModeFactor.hpp>
#include <RED4ext/Types/generated/PSODescBlendModeOp.hpp>
#include <RED4ext/Types/generated/PSODescBlendModeWriteMask.hpp>

namespace RED4ext
{
struct PSODescRenderTarget
{
    static constexpr const char* NAME = "PSODescRenderTarget";
    static constexpr const char* ALIAS = NAME;

    bool blendEnable; // 00
    PSODescBlendModeWriteMask writeMask; // 01
    PSODescBlendModeOp colorOp; // 02
    PSODescBlendModeOp alphaOp; // 03
    PSODescBlendModeFactor destFactor; // 04
    PSODescBlendModeFactor destAlphaFactor; // 05
    PSODescBlendModeFactor srcFactor; // 06
    PSODescBlendModeFactor srcAlphaFactor; // 07
};
RED4EXT_ASSERT_SIZE(PSODescRenderTarget, 0x8);
} // namespace RED4ext
