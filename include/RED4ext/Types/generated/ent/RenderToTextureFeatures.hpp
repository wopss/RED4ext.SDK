#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>

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
    bool allowOcclusionCulling; // 06
};
RED4EXT_ASSERT_SIZE(RenderToTextureFeatures, 0x7);
} // namespace ent
} // namespace RED4ext
