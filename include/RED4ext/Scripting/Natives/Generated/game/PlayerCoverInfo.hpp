#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct PlayerCoverInfo : IScriptable
{
    static constexpr const char* NAME = "gamePlayerCoverInfo";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x158 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(PlayerCoverInfo, 0x158);
} // namespace game
using gamePlayerCoverInfo = game::PlayerCoverInfo;
} // namespace RED4ext

// clang-format on
