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
struct SetProgressionBuildRequest : game::PlayerScriptableSystemRequest
{
    static constexpr const char* NAME = "gameSetProgressionBuildRequest";
    static constexpr const char* ALIAS = NAME;

    TweakDBID buildID; // 58
};
RED4EXT_ASSERT_SIZE(SetProgressionBuildRequest, 0x60);
} // namespace game
using gameSetProgressionBuildRequest = game::SetProgressionBuildRequest;
} // namespace RED4ext

// clang-format on
