#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/IRuntimeMappinData.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct RuntimeQuestMappinData : game::mappins::IRuntimeMappinData
{
    static constexpr const char* NAME = "gamemappinsRuntimeQuestMappinData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(RuntimeQuestMappinData, 0x58);
} // namespace game::mappins
using gamemappinsRuntimeQuestMappinData = game::mappins::RuntimeQuestMappinData;
} // namespace RED4ext

// clang-format on
