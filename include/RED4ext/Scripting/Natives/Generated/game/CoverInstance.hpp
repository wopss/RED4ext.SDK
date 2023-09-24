#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SmartObjectWorkspotInstance.hpp>

namespace RED4ext
{
namespace game
{
struct CoverInstance : game::SmartObjectWorkspotInstance
{
    static constexpr const char* NAME = "gameCoverInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk80[0x108 - 0x80]; // 80
};
RED4EXT_ASSERT_SIZE(CoverInstance, 0x108);
} // namespace game
using gameCoverInstance = game::CoverInstance;
} // namespace RED4ext

// clang-format on
