#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/grs/DeathmatchPlayerGameInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/grs/DeathmatchStatus.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/Time.hpp>

namespace RED4ext
{
namespace grs
{
struct DeathmatchState
{
    static constexpr const char* NAME = "grsDeathmatchState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x18 - 0x0]; // 0
    net::Time time; // 18
    grs::DeathmatchStatus status; // 20
    uint8_t unk24[0x28 - 0x24]; // 24
    net::Time sessionLength; // 28
#pragma warning(suppress : 4324)
    alignas(8) StaticArray<grs::DeathmatchPlayerGameInfo, 7> playersInfo; // 30
};
RED4EXT_ASSERT_SIZE(DeathmatchState, 0x150);
} // namespace grs
using grsDeathmatchState = grs::DeathmatchState;
} // namespace RED4ext

// clang-format on
