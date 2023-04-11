#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct OnPavement : red::Event
{
    static constexpr const char* NAME = "gameOnPavement";
    static constexpr const char* ALIAS = "OnPavement";

};
RED4EXT_ASSERT_SIZE(OnPavement, 0x40);
} // namespace game
using gameOnPavement = game::OnPavement;
using OnPavement = game::OnPavement;
} // namespace RED4ext

// clang-format on
