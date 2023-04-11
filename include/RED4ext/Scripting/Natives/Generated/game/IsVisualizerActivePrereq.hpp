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
struct IsVisualizerActivePrereq : game::IPrereq
{
    static constexpr const char* NAME = "gameIsVisualizerActivePrereq";
    static constexpr const char* ALIAS = "IsVisualizerActivePrereq";

};
RED4EXT_ASSERT_SIZE(IsVisualizerActivePrereq, 0x40);
} // namespace game
using gameIsVisualizerActivePrereq = game::IsVisualizerActivePrereq;
using IsVisualizerActivePrereq = game::IsVisualizerActivePrereq;
} // namespace RED4ext

// clang-format on
