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
struct MuppetBlackboardsComponent : game::MuppetComponent
{
    static constexpr const char* NAME = "gameMuppetBlackboardsComponent";
    static constexpr const char* ALIAS = "MuppetBlackboardsComponent";

    uint8_t unk90[0xB0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(MuppetBlackboardsComponent, 0xB0);
} // namespace game
using gameMuppetBlackboardsComponent = game::MuppetBlackboardsComponent;
using MuppetBlackboardsComponent = game::MuppetBlackboardsComponent;
} // namespace RED4ext

// clang-format on
