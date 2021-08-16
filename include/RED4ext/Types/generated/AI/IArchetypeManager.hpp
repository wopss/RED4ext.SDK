#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace AI { 
struct IArchetypeManager : game::IGameSystem
{
    static constexpr const char* NAME = "AIIArchetypeManager";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IArchetypeManager, 0x48);
} // namespace AI
} // namespace RED4ext
