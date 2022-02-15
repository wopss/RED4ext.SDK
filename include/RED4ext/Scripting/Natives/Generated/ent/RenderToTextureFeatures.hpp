#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace ent { 
struct RenderToTextureFeatures
{
    static constexpr const char* NAME = "entRenderToTextureFeatures";
    static constexpr const char* ALIAS = NAME;

    bool renderDecals; // 00
    bool renderParticles; // 01
    bool renderForwardNoTXAA; // 02
    bool antiAliasing; // 03
    bool contactShadows; // 04
    bool localShadows; // 05
};
RED4EXT_ASSERT_SIZE(RenderToTextureFeatures, 0x6);
} // namespace ent
} // namespace RED4ext
