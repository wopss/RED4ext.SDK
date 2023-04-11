#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MuppetControllerSnapshot.hpp>

namespace RED4ext
{
namespace game
{
struct MuppetControllersSnapshot
{
    static constexpr const char* NAME = "gameMuppetControllersSnapshot";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::MuppetControllerSnapshot> controllers; // 00
};
RED4EXT_ASSERT_SIZE(MuppetControllersSnapshot, 0x10);
} // namespace game
using gameMuppetControllersSnapshot = game::MuppetControllersSnapshot;
} // namespace RED4ext

// clang-format on
