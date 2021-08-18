#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ReplAnimTransformRequestBase.hpp>

namespace RED4ext
{
namespace game { 
struct ReplAnimTransformSyncAnimRequest : game::ReplAnimTransformRequestBase
{
    static constexpr const char* NAME = "gameReplAnimTransformSyncAnimRequest";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0x28 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(ReplAnimTransformSyncAnimRequest, 0x28);
} // namespace game
} // namespace RED4ext
