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
struct CurrentTargetPrereq : game::IPrereq
{
    static constexpr const char* NAME = "gameCurrentTargetPrereq";
    static constexpr const char* ALIAS = "CurrentTargetPrereq";

};
RED4EXT_ASSERT_SIZE(CurrentTargetPrereq, 0x40);
} // namespace game
using gameCurrentTargetPrereq = game::CurrentTargetPrereq;
using CurrentTargetPrereq = game::CurrentTargetPrereq;
} // namespace RED4ext

// clang-format on
