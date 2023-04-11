#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StatPoolType.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct MappinScriptData : IScriptable
{
    static constexpr const char* NAME = "gamemappinsMappinScriptData";
    static constexpr const char* ALIAS = "MappinScriptData";

    game::data::StatPoolType statPoolType; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(MappinScriptData, 0x48);
} // namespace game::mappins
using gamemappinsMappinScriptData = game::mappins::MappinScriptData;
using MappinScriptData = game::mappins::MappinScriptData;
} // namespace RED4ext

// clang-format on
