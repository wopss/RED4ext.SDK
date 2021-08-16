#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game { 
struct DoorComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameDoorComponent";
    static constexpr const char* ALIAS = NAME;

    bool interactible; // 90
    bool automatic; // 91
    bool physical; // 92
    uint8_t unk93[0x98 - 0x93]; // 93
    float autoOpeningSpeed; // 98
    uint8_t unk9C[0xA0 - 0x9C]; // 9C
};
RED4EXT_ASSERT_SIZE(DoorComponent, 0xA0);
} // namespace game
} // namespace RED4ext
