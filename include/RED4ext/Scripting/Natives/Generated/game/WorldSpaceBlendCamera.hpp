#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/BaseCameraComponent.hpp>

namespace RED4ext
{
namespace game { 
struct WorldSpaceBlendCamera : ent::BaseCameraComponent
{
    static constexpr const char* NAME = "gameWorldSpaceBlendCamera";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk1D0[0x240 - 0x1D0]; // 1D0
};
RED4EXT_ASSERT_SIZE(WorldSpaceBlendCamera, 0x240);
} // namespace game
} // namespace RED4ext
