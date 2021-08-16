#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/INavigationSystem.hpp>

namespace RED4ext
{
namespace AI { 
struct NavigationSystem : AI::INavigationSystem
{
    static constexpr const char* NAME = "AINavigationSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xB8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(NavigationSystem, 0xB8);
} // namespace AI
} // namespace RED4ext
