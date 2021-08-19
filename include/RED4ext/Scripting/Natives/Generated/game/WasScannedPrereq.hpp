#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IPrereq.hpp>

namespace RED4ext
{
namespace game { 
struct WasScannedPrereq : game::IPrereq
{
    static constexpr const char* NAME = "gameWasScannedPrereq";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(WasScannedPrereq, 0x40);
} // namespace game
} // namespace RED4ext
