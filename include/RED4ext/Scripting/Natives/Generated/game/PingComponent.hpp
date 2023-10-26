#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/PingType.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) PingComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gamePingComponent";
    static constexpr const char* ALIAS = "PingComponent";

    game::data::PingType associatedPingType; // 120
    uint8_t unk124[0x130 - 0x124]; // 124
};
RED4EXT_ASSERT_SIZE(PingComponent, 0x130);
} // namespace game
using gamePingComponent = game::PingComponent;
using PingComponent = game::PingComponent;
} // namespace RED4ext

// clang-format on
