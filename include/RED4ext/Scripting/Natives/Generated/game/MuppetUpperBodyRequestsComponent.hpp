#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetComponent.hpp>

namespace RED4ext
{
namespace game
{
struct MuppetUpperBodyRequestsComponent : game::MuppetComponent
{
    static constexpr const char* NAME = "gameMuppetUpperBodyRequestsComponent";
    static constexpr const char* ALIAS = "MuppetUpperBodyRequestsComponent";

    uint8_t unk90[0x118 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(MuppetUpperBodyRequestsComponent, 0x118);
} // namespace game
using gameMuppetUpperBodyRequestsComponent = game::MuppetUpperBodyRequestsComponent;
using MuppetUpperBodyRequestsComponent = game::MuppetUpperBodyRequestsComponent;
} // namespace RED4ext

// clang-format on
