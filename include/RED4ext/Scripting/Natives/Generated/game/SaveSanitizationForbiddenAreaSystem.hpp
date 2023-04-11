#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ISaveSanitizationForbiddenAreaSystem.hpp>

namespace RED4ext
{
namespace game
{
struct SaveSanitizationForbiddenAreaSystem : game::ISaveSanitizationForbiddenAreaSystem
{
    static constexpr const char* NAME = "gameSaveSanitizationForbiddenAreaSystem";
    static constexpr const char* ALIAS = "SaveSanitizationForbiddenAreaSystem";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(SaveSanitizationForbiddenAreaSystem, 0x50);
} // namespace game
using gameSaveSanitizationForbiddenAreaSystem = game::SaveSanitizationForbiddenAreaSystem;
using SaveSanitizationForbiddenAreaSystem = game::SaveSanitizationForbiddenAreaSystem;
} // namespace RED4ext

// clang-format on
