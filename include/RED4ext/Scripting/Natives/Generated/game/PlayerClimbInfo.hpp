#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace world::geometry { struct DescriptionResult; }

namespace game { 
struct PlayerClimbInfo : IScriptable
{
    static constexpr const char* NAME = "gamePlayerClimbInfo";
    static constexpr const char* ALIAS = "PlayerClimbInfo";

    Handle<world::geometry::DescriptionResult> descResult; // 40
    Vector4 obstacleEnd; // 50
    bool climbValid; // 60
    bool vaultValid; // 61
    uint8_t unk62[0x70 - 0x62]; // 62
};
RED4EXT_ASSERT_SIZE(PlayerClimbInfo, 0x70);
} // namespace game
using PlayerClimbInfo = game::PlayerClimbInfo;
} // namespace RED4ext
