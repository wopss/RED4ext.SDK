#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetComponent.hpp>

namespace RED4ext
{
namespace game { 
struct MuppetPhysicsComponent : game::MuppetComponent
{
    static constexpr const char* NAME = "gameMuppetPhysicsComponent";
    static constexpr const char* ALIAS = "MuppetPhysicsComponent";

    uint8_t unk90[0xE0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(MuppetPhysicsComponent, 0xE0);
} // namespace game
using MuppetPhysicsComponent = game::MuppetPhysicsComponent;
} // namespace RED4ext
