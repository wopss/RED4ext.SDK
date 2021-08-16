#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/ent/BaseCameraComponent.hpp>

namespace RED4ext
{
namespace game { 
struct WorldSpaceBlendCamera : ent::BaseCameraComponent
{
    static constexpr const char* NAME = "gameWorldSpaceBlendCamera";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk1C0[0x230 - 0x1C0]; // 1C0
};
RED4EXT_ASSERT_SIZE(WorldSpaceBlendCamera, 0x230);
} // namespace game
} // namespace RED4ext
