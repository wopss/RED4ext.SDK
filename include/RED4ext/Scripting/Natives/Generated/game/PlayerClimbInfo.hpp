#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace world::geometry { struct DescriptionResult; }

namespace game
{
struct __declspec(align(0x10)) PlayerClimbInfo : IScriptable
{
    static constexpr const char* NAME = "gamePlayerClimbInfo";
    static constexpr const char* ALIAS = "PlayerClimbInfo";

    Handle<world::geometry::DescriptionResult> descResult; // 40
    Vector4 obstacleEnd; // 50
    Vector4 inputDirection; // 60
    bool climbValid; // 70
    bool vaultValid; // 71
    uint8_t unk72[0x80 - 0x72]; // 72
};
RED4EXT_ASSERT_SIZE(PlayerClimbInfo, 0x80);
} // namespace game
using gamePlayerClimbInfo = game::PlayerClimbInfo;
using PlayerClimbInfo = game::PlayerClimbInfo;
} // namespace RED4ext

// clang-format on
