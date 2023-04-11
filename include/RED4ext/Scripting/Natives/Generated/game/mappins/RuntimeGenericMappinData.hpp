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
struct RuntimeGenericMappinData : game::mappins::IRuntimeMappinData
{
    static constexpr const char* NAME = "gamemappinsRuntimeGenericMappinData";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(RuntimeGenericMappinData, 0x50);
} // namespace game::mappins
using gamemappinsRuntimeGenericMappinData = game::mappins::RuntimeGenericMappinData;
} // namespace RED4ext

// clang-format on
