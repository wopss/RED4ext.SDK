#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game { 
struct FootstepComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameFootstepComponent";
    static constexpr const char* ALIAS = "FootstepComponent";

    TweakDBID tweakDBID; // 90
    CName leftFootSlot; // 98
    CName rightFootSlot; // A0
    uint8_t unkA8[0xB0 - 0xA8]; // A8
};
RED4EXT_ASSERT_SIZE(FootstepComponent, 0xB0);
} // namespace game
using FootstepComponent = game::FootstepComponent;
} // namespace RED4ext
