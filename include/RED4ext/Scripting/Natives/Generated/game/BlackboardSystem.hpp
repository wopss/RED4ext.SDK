#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IBlackboardSystem.hpp>

namespace RED4ext
{
namespace game
{
struct BlackboardSystem : game::IBlackboardSystem
{
    static constexpr const char* NAME = "gameBlackboardSystem";
    static constexpr const char* ALIAS = "BlackboardSystem";

    uint8_t unk48[0x8F8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(BlackboardSystem, 0x8F8);
} // namespace game
using gameBlackboardSystem = game::BlackboardSystem;
using BlackboardSystem = game::BlackboardSystem;
} // namespace RED4ext

// clang-format on
