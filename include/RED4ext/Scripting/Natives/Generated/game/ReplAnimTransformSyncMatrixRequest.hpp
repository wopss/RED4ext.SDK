#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ReplAnimTransformRequestBase.hpp>

namespace RED4ext
{
namespace game { 
struct ReplAnimTransformSyncMatrixRequest : game::ReplAnimTransformRequestBase
{
    static constexpr const char* NAME = "gameReplAnimTransformSyncMatrixRequest";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0x20 - 0x18]; // 18
    Transform transform; // 20
};
RED4EXT_ASSERT_SIZE(ReplAnimTransformSyncMatrixRequest, 0x40);
} // namespace game
} // namespace RED4ext
