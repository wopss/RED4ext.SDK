#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IDebugSystem.hpp>

namespace RED4ext
{
namespace game
{
struct CDebugSystem : game::IDebugSystem
{
    static constexpr const char* NAME = "gameCDebugSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(CDebugSystem, 0x50);
} // namespace game
using gameCDebugSystem = game::CDebugSystem;
} // namespace RED4ext

// clang-format on
