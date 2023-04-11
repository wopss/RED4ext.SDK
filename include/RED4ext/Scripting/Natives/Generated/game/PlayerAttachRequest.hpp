#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PlayerScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace game
{
struct PlayerAttachRequest : game::PlayerScriptableSystemRequest
{
    static constexpr const char* NAME = "gamePlayerAttachRequest";
    static constexpr const char* ALIAS = "PlayerAttachRequest";

};
RED4EXT_ASSERT_SIZE(PlayerAttachRequest, 0x58);
} // namespace game
using gamePlayerAttachRequest = game::PlayerAttachRequest;
using PlayerAttachRequest = game::PlayerAttachRequest;
} // namespace RED4ext

// clang-format on
