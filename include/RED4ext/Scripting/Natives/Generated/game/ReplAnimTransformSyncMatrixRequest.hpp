#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ReplAnimTransformRequestBase.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) ReplAnimTransformSyncMatrixRequest : game::ReplAnimTransformRequestBase
{
    static constexpr const char* NAME = "gameReplAnimTransformSyncMatrixRequest";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0x20 - 0x18]; // 18
    Transform transform; // 20
};
RED4EXT_ASSERT_SIZE(ReplAnimTransformSyncMatrixRequest, 0x40);
} // namespace game
using gameReplAnimTransformSyncMatrixRequest = game::ReplAnimTransformSyncMatrixRequest;
} // namespace RED4ext

// clang-format on
