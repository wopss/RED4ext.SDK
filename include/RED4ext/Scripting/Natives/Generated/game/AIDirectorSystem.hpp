#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IAIDirectorSystem.hpp>

namespace RED4ext
{
namespace game
{
struct AIDirectorSystem : game::IAIDirectorSystem
{
    static constexpr const char* NAME = "gameAIDirectorSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xD8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AIDirectorSystem, 0xD8);
} // namespace game
using gameAIDirectorSystem = game::AIDirectorSystem;
} // namespace RED4ext

// clang-format on
