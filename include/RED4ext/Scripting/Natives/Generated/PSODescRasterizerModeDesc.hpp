#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/PSODescRasterizerModeCullMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/PSODescRasterizerModeFrontFaceWinding.hpp>
#include <RED4ext/Scripting/Natives/Generated/PSODescRasterizerModeOffsetMode.hpp>

namespace RED4ext
{
struct PSODescRasterizerModeDesc
{
    static constexpr const char* NAME = "PSODescRasterizerModeDesc";
    static constexpr const char* ALIAS = NAME;

    bool wireframe; // 00
    PSODescRasterizerModeFrontFaceWinding frontWinding; // 01
    PSODescRasterizerModeCullMode cullMode; // 02
    bool allowMSAA; // 03
    PSODescRasterizerModeOffsetMode offsetMode; // 04
    bool scissors; // 05
    bool conservativeRasterization; // 06
    bool valid; // 07
};
RED4EXT_ASSERT_SIZE(PSODescRasterizerModeDesc, 0x8);
} // namespace RED4ext

// clang-format on
