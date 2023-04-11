#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game
{
struct ITransformAnimatorSaveSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameITransformAnimatorSaveSystem";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ITransformAnimatorSaveSystem, 0x48);
} // namespace game
using gameITransformAnimatorSaveSystem = game::ITransformAnimatorSaveSystem;
} // namespace RED4ext

// clang-format on
