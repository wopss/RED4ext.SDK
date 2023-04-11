#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace game
{
struct IBlackboardUpdateProxy : game::IGameSystem
{
    static constexpr const char* NAME = "gameIBlackboardUpdateProxy";
    static constexpr const char* ALIAS = "IBlackboardUpdateProxy";

};
RED4EXT_ASSERT_SIZE(IBlackboardUpdateProxy, 0x48);
} // namespace game
using gameIBlackboardUpdateProxy = game::IBlackboardUpdateProxy;
using IBlackboardUpdateProxy = game::IBlackboardUpdateProxy;
} // namespace RED4ext

// clang-format on
