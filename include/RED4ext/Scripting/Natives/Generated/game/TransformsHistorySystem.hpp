#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ITransformsHistorySystem.hpp>

namespace RED4ext
{
namespace game
{
struct TransformsHistorySystem : game::ITransformsHistorySystem
{
    static constexpr const char* NAME = "gameTransformsHistorySystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xC0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(TransformsHistorySystem, 0xC0);
} // namespace game
using gameTransformsHistorySystem = game::TransformsHistorySystem;
} // namespace RED4ext

// clang-format on
