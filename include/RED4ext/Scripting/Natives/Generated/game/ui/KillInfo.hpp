#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/KillType.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::ui
{
struct KillInfo
{
    static constexpr const char* NAME = "gameuiKillInfo";
    static constexpr const char* ALIAS = "KillInfo";

    WeakHandle<game::Object> killerEntity; // 00
    WeakHandle<game::Object> victimEntity; // 10
    game::KillType killType; // 20
    uint8_t unk24[0x28 - 0x24]; // 24
};
RED4EXT_ASSERT_SIZE(KillInfo, 0x28);
} // namespace game::ui
using gameuiKillInfo = game::ui::KillInfo;
using KillInfo = game::ui::KillInfo;
} // namespace RED4ext

// clang-format on
