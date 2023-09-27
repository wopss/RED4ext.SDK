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
struct RuntimePointOfInterestMappinData : game::mappins::IRuntimeMappinData
{
    static constexpr const char* NAME = "gamemappinsRuntimePointOfInterestMappinData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk50[0x70 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(RuntimePointOfInterestMappinData, 0x70);
} // namespace game::mappins
using gamemappinsRuntimePointOfInterestMappinData = game::mappins::RuntimePointOfInterestMappinData;
} // namespace RED4ext

// clang-format on
