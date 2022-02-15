#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IMoverComponent.hpp>

namespace RED4ext
{
namespace move { 
struct Component : ent::IMoverComponent
{
    static constexpr const char* NAME = "moveComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0x2C0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(Component, 0x2C0);
} // namespace move
} // namespace RED4ext
