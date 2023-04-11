#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game
{
struct ReplAnimTransformSyncElem
{
    static constexpr const char* NAME = "gameReplAnimTransformSyncElem";
    static constexpr const char* ALIAS = NAME;

    int32_t definitionId; // 00
    float currentTime; // 04
    float timeScale; // 08
    float duration; // 0C
    int32_t timesToPlay; // 10
    bool playing; // 14
    uint8_t unk15[0x18 - 0x15]; // 15
};
RED4EXT_ASSERT_SIZE(ReplAnimTransformSyncElem, 0x18);
} // namespace game
using gameReplAnimTransformSyncElem = game::ReplAnimTransformSyncElem;
} // namespace RED4ext

// clang-format on
