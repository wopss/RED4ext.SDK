#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IComparisonPrereq.hpp>

namespace RED4ext
{
namespace game
{
struct IRPGPrereq : game::IComparisonPrereq
{
    static constexpr const char* NAME = "gameIRPGPrereq";
    static constexpr const char* ALIAS = "IRPGPrereq";

};
RED4EXT_ASSERT_SIZE(IRPGPrereq, 0x48);
} // namespace game
using gameIRPGPrereq = game::IRPGPrereq;
using IRPGPrereq = game::IRPGPrereq;
} // namespace RED4ext

// clang-format on
