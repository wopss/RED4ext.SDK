#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/IMappinSystem.hpp>

namespace RED4ext
{
namespace game::mappins { 
struct MappinSystem : game::mappins::IMappinSystem
{
    static constexpr const char* NAME = "gamemappinsMappinSystem";
    static constexpr const char* ALIAS = "MappinSystem";

    uint8_t unk58[0x18440 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(MappinSystem, 0x18440);
} // namespace game::mappins
using MappinSystem = game::mappins::MappinSystem;
} // namespace RED4ext
