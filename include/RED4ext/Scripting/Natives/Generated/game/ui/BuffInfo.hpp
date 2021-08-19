#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game::ui { 
struct BuffInfo
{
    static constexpr const char* NAME = "gameuiBuffInfo";
    static constexpr const char* ALIAS = NAME;

    TweakDBID buffID; // 00
    float timeRemaining; // 08
};
RED4EXT_ASSERT_SIZE(BuffInfo, 0xC);
} // namespace game::ui
} // namespace RED4ext
