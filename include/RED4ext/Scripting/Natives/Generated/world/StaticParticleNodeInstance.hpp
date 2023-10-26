#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/RenderSceneLayerMask.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/INodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct __declspec(align(0x10)) StaticParticleNodeInstance : world::INodeInstance
{
    static constexpr const char* NAME = "worldStaticParticleNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0xCC - 0x90]; // 90
    RenderSceneLayerMask renderLayerMask; // CC
    uint8_t unkCD[0xD0 - 0xCD]; // CD
};
RED4EXT_ASSERT_SIZE(StaticParticleNodeInstance, 0xD0);
} // namespace world
using worldStaticParticleNodeInstance = world::StaticParticleNodeInstance;
} // namespace RED4ext

// clang-format on
