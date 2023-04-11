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
struct ReplAnimTransformOperationRequest : game::ReplAnimTransformRequestBase
{
    static constexpr const char* NAME = "gameReplAnimTransformOperationRequest";
    static constexpr const char* ALIAS = NAME;

    CName animName; // 18
    uint8_t operationType; // 20
    uint8_t unk21[0x28 - 0x21]; // 21
};
RED4EXT_ASSERT_SIZE(ReplAnimTransformOperationRequest, 0x28);
} // namespace game
using gameReplAnimTransformOperationRequest = game::ReplAnimTransformOperationRequest;
} // namespace RED4ext

// clang-format on
