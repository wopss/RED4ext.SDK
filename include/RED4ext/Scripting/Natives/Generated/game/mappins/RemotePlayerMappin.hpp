#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/RuntimeMappin.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct RemotePlayerMappin : game::mappins::RuntimeMappin
{
    static constexpr const char* NAME = "gamemappinsRemotePlayerMappin";
    static constexpr const char* ALIAS = "RemotePlayerMappin";

    int32_t vitals; // 108
    bool hasMissionData; // 10C
    uint8_t unk10D[0x118 - 0x10D]; // 10D
};
RED4EXT_ASSERT_SIZE(RemotePlayerMappin, 0x118);
} // namespace game::mappins
using gamemappinsRemotePlayerMappin = game::mappins::RemotePlayerMappin;
using RemotePlayerMappin = game::mappins::RemotePlayerMappin;
} // namespace RED4ext

// clang-format on
