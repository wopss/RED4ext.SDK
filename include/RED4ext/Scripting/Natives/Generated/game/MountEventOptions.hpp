#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct MountEventOptions : IScriptable
{
    static constexpr const char* NAME = "gameMountEventOptions";
    static constexpr const char* ALIAS = "MountEventOptions";

    bool silentUnmount; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(MountEventOptions, 0x48);
} // namespace game
using gameMountEventOptions = game::MountEventOptions;
using MountEventOptions = game::MountEventOptions;
} // namespace RED4ext

// clang-format on
