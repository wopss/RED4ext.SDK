#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IBlackboardUpdateProxy.hpp>

namespace RED4ext
{
namespace game
{
struct BlackboardUpdateProxy : game::IBlackboardUpdateProxy
{
    static constexpr const char* NAME = "gameBlackboardUpdateProxy";
    static constexpr const char* ALIAS = "BlackboardUpdateProxy";

};
RED4EXT_ASSERT_SIZE(BlackboardUpdateProxy, 0x48);
} // namespace game
using gameBlackboardUpdateProxy = game::BlackboardUpdateProxy;
using BlackboardUpdateProxy = game::BlackboardUpdateProxy;
} // namespace RED4ext

// clang-format on
