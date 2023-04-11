#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/MappinVariant.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/IMappinData.hpp>

namespace RED4ext
{
namespace game::mappins { struct MappinScriptData; }

namespace game::mappins
{
struct MappinData : game::mappins::IMappinData
{
    static constexpr const char* NAME = "gamemappinsMappinData";
    static constexpr const char* ALIAS = "MappinData";

    TweakDBID mappinType; // 08
    game::data::MappinVariant variant; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
    CString debugCaption; // 18
    LocalizationString localizedCaption; // 38
    bool active; // 60
    bool visibleThroughWalls; // 61
    uint8_t unk62[0x68 - 0x62]; // 62
    Handle<game::mappins::MappinScriptData> scriptData; // 68
};
RED4EXT_ASSERT_SIZE(MappinData, 0x78);
} // namespace game::mappins
using gamemappinsMappinData = game::mappins::MappinData;
using MappinData = game::mappins::MappinData;
} // namespace RED4ext

// clang-format on
