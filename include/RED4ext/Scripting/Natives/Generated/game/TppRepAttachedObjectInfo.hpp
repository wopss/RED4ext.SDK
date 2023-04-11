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
struct TppRepAttachedObjectInfo
{
    static constexpr const char* NAME = "gameTppRepAttachedObjectInfo";
    static constexpr const char* ALIAS = NAME;

    TweakDBID slotID; // 00
    TweakDBID itemID; // 08
    uint8_t unk10[0x14 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(TppRepAttachedObjectInfo, 0x14);
} // namespace game
using gameTppRepAttachedObjectInfo = game::TppRepAttachedObjectInfo;
} // namespace RED4ext

// clang-format on
