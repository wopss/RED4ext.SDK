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
struct RuntimeStubMappinData : game::mappins::IRuntimeMappinData
{
    static constexpr const char* NAME = "gamemappinsRuntimeStubMappinData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(RuntimeStubMappinData, 0x58);
} // namespace game::mappins
using gamemappinsRuntimeStubMappinData = game::mappins::RuntimeStubMappinData;
} // namespace RED4ext

// clang-format on
