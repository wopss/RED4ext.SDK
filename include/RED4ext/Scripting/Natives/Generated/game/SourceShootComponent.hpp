#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game { 
struct SourceShootComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameSourceShootComponent";
    static constexpr const char* ALIAS = "SourceShootComponent";

    uint8_t unk90[0x118 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(SourceShootComponent, 0x118);
} // namespace game
using SourceShootComponent = game::SourceShootComponent;
} // namespace RED4ext
