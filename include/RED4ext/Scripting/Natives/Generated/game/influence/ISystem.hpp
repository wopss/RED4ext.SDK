#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game::influence
{
struct ISystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameinfluenceISystem";
    static constexpr const char* ALIAS = "IInfluenceMapSystem";

};
RED4EXT_ASSERT_SIZE(ISystem, 0x48);
} // namespace game::influence
using gameinfluenceISystem = game::influence::ISystem;
using IInfluenceMapSystem = game::influence::ISystem;
} // namespace RED4ext

// clang-format on
