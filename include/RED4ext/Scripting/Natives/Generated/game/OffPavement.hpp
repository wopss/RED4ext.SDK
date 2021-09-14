#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { 
struct OffPavement : red::Event
{
    static constexpr const char* NAME = "gameOffPavement";
    static constexpr const char* ALIAS = "OffPavement";

};
RED4EXT_ASSERT_SIZE(OffPavement, 0x40);
} // namespace game
using OffPavement = game::OffPavement;
} // namespace RED4ext
