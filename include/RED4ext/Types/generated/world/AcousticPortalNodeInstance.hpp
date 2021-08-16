#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/world/INodeInstance.hpp>

namespace RED4ext
{
namespace world { 
struct AcousticPortalNodeInstance : world::INodeInstance
{
    static constexpr const char* NAME = "worldAcousticPortalNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0xA0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(AcousticPortalNodeInstance, 0xA0);
} // namespace world
} // namespace RED4ext
