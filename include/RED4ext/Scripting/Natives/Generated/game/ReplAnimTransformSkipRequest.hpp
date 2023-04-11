#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ReplAnimTransformRequestBase.hpp>

namespace RED4ext
{
namespace game
{
struct ReplAnimTransformSkipRequest : game::ReplAnimTransformRequestBase
{
    static constexpr const char* NAME = "gameReplAnimTransformSkipRequest";
    static constexpr const char* ALIAS = NAME;

    CName animName; // 18
    float skipTime; // 20
    uint8_t unk24[0x28 - 0x24]; // 24
};
RED4EXT_ASSERT_SIZE(ReplAnimTransformSkipRequest, 0x28);
} // namespace game
using gameReplAnimTransformSkipRequest = game::ReplAnimTransformSkipRequest;
} // namespace RED4ext

// clang-format on
