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
struct MuppetInventory : game::MuppetComponent
{
    static constexpr const char* NAME = "gameMuppetInventory";
    static constexpr const char* ALIAS = "MuppetInventory";

    uint8_t unk90[0x98 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(MuppetInventory, 0x98);
} // namespace game
using gameMuppetInventory = game::MuppetInventory;
using MuppetInventory = game::MuppetInventory;
} // namespace RED4ext

// clang-format on
