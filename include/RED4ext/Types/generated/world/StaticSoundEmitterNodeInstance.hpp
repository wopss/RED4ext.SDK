#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/world/INodeInstance.hpp>

namespace RED4ext
{
namespace world { 
struct StaticSoundEmitterNodeInstance : world::INodeInstance
{
    static constexpr const char* NAME = "worldStaticSoundEmitterNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0xB0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(StaticSoundEmitterNodeInstance, 0xB0);
} // namespace world
} // namespace RED4ext
