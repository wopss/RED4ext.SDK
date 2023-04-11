#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace AI
{
struct ObjectSelectionManagerInterface : game::IGameSystem
{
    static constexpr const char* NAME = "AIObjectSelectionManagerInterface";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ObjectSelectionManagerInterface, 0x48);
} // namespace AI
using AIObjectSelectionManagerInterface = AI::ObjectSelectionManagerInterface;
} // namespace RED4ext

// clang-format on
