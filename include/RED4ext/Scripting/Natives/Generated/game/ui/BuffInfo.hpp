#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game::ui
{
struct BuffInfo
{
    static constexpr const char* NAME = "gameuiBuffInfo";
    static constexpr const char* ALIAS = "BuffInfo";

    TweakDBID buffID; // 00
    float timeRemaining; // 08
    float timeTotal; // 0C
    uint32_t stackCount; // 10
};
RED4EXT_ASSERT_SIZE(BuffInfo, 0x14);
} // namespace game::ui
using gameuiBuffInfo = game::ui::BuffInfo;
using BuffInfo = game::ui::BuffInfo;
} // namespace RED4ext

// clang-format on
