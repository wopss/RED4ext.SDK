#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PlayerScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace game
{
struct UnequipByTDBIDRequest : game::PlayerScriptableSystemRequest
{
    static constexpr const char* NAME = "gameUnequipByTDBIDRequest";
    static constexpr const char* ALIAS = "UnequipByTDBIDRequest";

    TweakDBID itemTDBID; // 58
};
RED4EXT_ASSERT_SIZE(UnequipByTDBIDRequest, 0x60);
} // namespace game
using gameUnequipByTDBIDRequest = game::UnequipByTDBIDRequest;
using UnequipByTDBIDRequest = game::UnequipByTDBIDRequest;
} // namespace RED4ext

// clang-format on
