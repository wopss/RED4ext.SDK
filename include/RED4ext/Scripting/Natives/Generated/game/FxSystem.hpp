#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IFxSystem.hpp>

namespace RED4ext
{
namespace game
{
struct FxSystem : game::IFxSystem
{
    static constexpr const char* NAME = "gameFxSystem";
    static constexpr const char* ALIAS = "FxSystem";

    uint8_t unk48[0x88 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(FxSystem, 0x88);
} // namespace game
using gameFxSystem = game::FxSystem;
using FxSystem = game::FxSystem;
} // namespace RED4ext

// clang-format on
