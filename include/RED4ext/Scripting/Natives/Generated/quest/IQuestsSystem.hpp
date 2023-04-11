#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IReplicatedGameSystem.hpp>

namespace RED4ext
{
namespace quest
{
struct IQuestsSystem : game::IReplicatedGameSystem
{
    static constexpr const char* NAME = "questIQuestsSystem";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IQuestsSystem, 0x58);
} // namespace quest
using questIQuestsSystem = quest::IQuestsSystem;
} // namespace RED4ext

// clang-format on
