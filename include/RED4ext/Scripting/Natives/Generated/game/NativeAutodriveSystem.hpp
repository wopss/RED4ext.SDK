#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScriptableSystem.hpp>

namespace RED4ext
{
namespace game
{
struct NativeAutodriveSystem : game::ScriptableSystem
{
    static constexpr const char* NAME = "gameNativeAutodriveSystem";
    static constexpr const char* ALIAS = "NativeAutodriveSystem";

    uint8_t unk530[0x550 - 0x530]; // 530
};
RED4EXT_ASSERT_SIZE(NativeAutodriveSystem, 0x550);
} // namespace game
using gameNativeAutodriveSystem = game::NativeAutodriveSystem;
using NativeAutodriveSystem = game::NativeAutodriveSystem;
} // namespace RED4ext

// clang-format on
