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
struct RuntimeInteractionMappinData : game::mappins::IRuntimeMappinData
{
    static constexpr const char* NAME = "gamemappinsRuntimeInteractionMappinData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(RuntimeInteractionMappinData, 0x60);
} // namespace game::mappins
using gamemappinsRuntimeInteractionMappinData = game::mappins::RuntimeInteractionMappinData;
} // namespace RED4ext

// clang-format on
