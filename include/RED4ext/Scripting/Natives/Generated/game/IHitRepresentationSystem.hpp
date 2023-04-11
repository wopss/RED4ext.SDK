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
struct IHitRepresentationSystem : game::IGameSystem
{
    static constexpr const char* NAME = "gameIHitRepresentationSystem";
    static constexpr const char* ALIAS = "IHitRepresentationSystem";

};
RED4EXT_ASSERT_SIZE(IHitRepresentationSystem, 0x48);
} // namespace game
using gameIHitRepresentationSystem = game::IHitRepresentationSystem;
using IHitRepresentationSystem = game::IHitRepresentationSystem;
} // namespace RED4ext

// clang-format on
