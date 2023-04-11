#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace quest
{
struct IPhoneManager : game::IGameSystem
{
    static constexpr const char* NAME = "questIPhoneManager";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IPhoneManager, 0x48);
} // namespace quest
using questIPhoneManager = quest::IPhoneManager;
} // namespace RED4ext

// clang-format on
