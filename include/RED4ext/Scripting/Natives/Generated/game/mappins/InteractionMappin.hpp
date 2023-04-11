#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/RuntimeMappin.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct InteractionMappin : game::mappins::RuntimeMappin
{
    static constexpr const char* NAME = "gamemappinsInteractionMappin";
    static constexpr const char* ALIAS = "InteractionMappin";

    uint8_t unk108[0x128 - 0x108]; // 108
};
RED4EXT_ASSERT_SIZE(InteractionMappin, 0x128);
} // namespace game::mappins
using gamemappinsInteractionMappin = game::mappins::InteractionMappin;
using InteractionMappin = game::mappins::InteractionMappin;
} // namespace RED4ext

// clang-format on
