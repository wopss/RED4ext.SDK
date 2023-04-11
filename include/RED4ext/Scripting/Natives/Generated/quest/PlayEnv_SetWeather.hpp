#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IEnvironmentManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct PlayEnv_SetWeather : quest::IEnvironmentManagerNodeType
{
    static constexpr const char* NAME = "questPlayEnv_SetWeather";
    static constexpr const char* ALIAS = NAME;

    TweakDBID weatherID; // 30
    CName source; // 38
    float blendTime; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    uint32_t priority; // 48
    bool reset; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
};
RED4EXT_ASSERT_SIZE(PlayEnv_SetWeather, 0x50);
} // namespace quest
using questPlayEnv_SetWeather = quest::PlayEnv_SetWeather;
} // namespace RED4ext

// clang-format on
