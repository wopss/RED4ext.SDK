#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game
{
struct FppRepDetachedObjectInfo
{
    static constexpr const char* NAME = "gameFppRepDetachedObjectInfo";
    static constexpr const char* ALIAS = NAME;

    TweakDBID slotID; // 00
    TweakDBID itemTDBID; // 08
    uint8_t unk10[0x24 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(FppRepDetachedObjectInfo, 0x24);
} // namespace game
using gameFppRepDetachedObjectInfo = game::FppRepDetachedObjectInfo;
} // namespace RED4ext

// clang-format on
