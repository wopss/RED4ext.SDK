#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/BlackboardUpdateProxy.hpp>

namespace RED4ext
{
namespace game
{
struct ServerBlackboardUpdateProxy : game::BlackboardUpdateProxy
{
    static constexpr const char* NAME = "gameServerBlackboardUpdateProxy";
    static constexpr const char* ALIAS = "ServerBlackboardUpdateProxy";

};
RED4EXT_ASSERT_SIZE(ServerBlackboardUpdateProxy, 0x48);
} // namespace game
using gameServerBlackboardUpdateProxy = game::ServerBlackboardUpdateProxy;
using ServerBlackboardUpdateProxy = game::ServerBlackboardUpdateProxy;
} // namespace RED4ext

// clang-format on
