#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/KillInfo.hpp>

namespace RED4ext
{
namespace game::damage
{
struct ServerKillData : IScriptable
{
    static constexpr const char* NAME = "gamedamageServerKillData";
    static constexpr const char* ALIAS = "ServerKillData";

    uint32_t id; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    game::ui::KillInfo killInfo; // 48
    uint8_t unk70[0x78 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(ServerKillData, 0x78);
} // namespace game::damage
using gamedamageServerKillData = game::damage::ServerKillData;
using ServerKillData = game::damage::ServerKillData;
} // namespace RED4ext

// clang-format on
