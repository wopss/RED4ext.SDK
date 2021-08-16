#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game { 
struct TppRepItemAppearanceInfo
{
    static constexpr const char* NAME = "gameTppRepItemAppearanceInfo";
    static constexpr const char* ALIAS = NAME;

    TweakDBID itemID; // 00
    CName appearance; // 08
};
RED4EXT_ASSERT_SIZE(TppRepItemAppearanceInfo, 0x10);
} // namespace game
} // namespace RED4ext
