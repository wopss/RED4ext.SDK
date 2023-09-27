#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/RenderToTextureFeaturesPlatform.hpp>

namespace RED4ext
{
namespace ent
{
struct RenderToTextureFeatures
{
    static constexpr const char* NAME = "entRenderToTextureFeatures";
    static constexpr const char* ALIAS = NAME;

    bool renderDecals; // 00
    bool renderParticles; // 01
    bool renderForwardNoTXAA; // 02
    ent::RenderToTextureFeaturesPlatform antiAliasing; // 03
    bool contactShadows; // 04
    bool localShadows; // 05
    ent::RenderToTextureFeaturesPlatform SSAO; // 06
    ent::RenderToTextureFeaturesPlatform reflections; // 07
};
RED4EXT_ASSERT_SIZE(RenderToTextureFeatures, 0x8);
} // namespace ent
using entRenderToTextureFeatures = ent::RenderToTextureFeatures;
} // namespace RED4ext

// clang-format on
