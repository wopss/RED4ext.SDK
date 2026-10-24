#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScriptableSystem.hpp>

namespace RED4ext
{
namespace game
{
struct CyberwareCustomizationSystem : game::ScriptableSystem
{
    static constexpr const char* NAME = "gameCyberwareCustomizationSystem";
    static constexpr const char* ALIAS = "NativeCyberwareCustomizationSystem";

};
RED4EXT_ASSERT_SIZE(CyberwareCustomizationSystem, 0x530);
} // namespace game
using gameCyberwareCustomizationSystem = game::CyberwareCustomizationSystem;
using NativeCyberwareCustomizationSystem = game::CyberwareCustomizationSystem;
} // namespace RED4ext

// clang-format on
