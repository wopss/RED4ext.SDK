#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/GlobalTierSubtype.hpp>

namespace RED4ext
{
namespace game { struct SceneTierData; }

namespace game
{
struct GlobalTierSaveData
{
    static constexpr const char* NAME = "gameGlobalTierSaveData";
    static constexpr const char* ALIAS = NAME;

    game::GlobalTierSubtype subtype; // 00
    uint8_t unk01[0x8 - 0x1]; // 1
    Handle<game::SceneTierData> data; // 08
};
RED4EXT_ASSERT_SIZE(GlobalTierSaveData, 0x18);
} // namespace game
using gameGlobalTierSaveData = game::GlobalTierSaveData;
} // namespace RED4ext

// clang-format on
