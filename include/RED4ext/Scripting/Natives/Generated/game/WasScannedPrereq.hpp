#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IPrereq.hpp>

namespace RED4ext
{
namespace game
{
struct WasScannedPrereq : game::IPrereq
{
    static constexpr const char* NAME = "gameWasScannedPrereq";
    static constexpr const char* ALIAS = "WasScannedPrereq";

};
RED4EXT_ASSERT_SIZE(WasScannedPrereq, 0x40);
} // namespace game
using gameWasScannedPrereq = game::WasScannedPrereq;
using WasScannedPrereq = game::WasScannedPrereq;
} // namespace RED4ext

// clang-format on
