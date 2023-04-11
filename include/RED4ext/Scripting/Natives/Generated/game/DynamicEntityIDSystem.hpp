#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IDynamicEntityIDSystem.hpp>

namespace RED4ext
{
namespace game
{
struct DynamicEntityIDSystem : game::IDynamicEntityIDSystem
{
    static constexpr const char* NAME = "gameDynamicEntityIDSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x140 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(DynamicEntityIDSystem, 0x140);
} // namespace game
using gameDynamicEntityIDSystem = game::DynamicEntityIDSystem;
} // namespace RED4ext

// clang-format on
