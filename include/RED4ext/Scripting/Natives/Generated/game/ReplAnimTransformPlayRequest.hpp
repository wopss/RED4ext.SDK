#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ReplAnimTransformRequestBase.hpp>

namespace RED4ext
{
namespace game { 
struct ReplAnimTransformPlayRequest : game::ReplAnimTransformRequestBase
{
    static constexpr const char* NAME = "gameReplAnimTransformPlayRequest";
    static constexpr const char* ALIAS = NAME;

    CName animName; // 18
    float timeScale; // 20
    int32_t timesToPlay; // 24
};
RED4EXT_ASSERT_SIZE(ReplAnimTransformPlayRequest, 0x28);
} // namespace game
} // namespace RED4ext
