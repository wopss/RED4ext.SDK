#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game { 
struct VisionActivatorComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameVisionActivatorComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0xB0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(VisionActivatorComponent, 0xB0);
} // namespace game
} // namespace RED4ext
