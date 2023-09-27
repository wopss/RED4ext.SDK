#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct OverrideMissShotOffset : red::Event
{
    static constexpr const char* NAME = "gameOverrideMissShotOffset";
    static constexpr const char* ALIAS = "OverrideMissShotOffset";

    CString overrideRecord; // 40
};
RED4EXT_ASSERT_SIZE(OverrideMissShotOffset, 0x60);
} // namespace game
using gameOverrideMissShotOffset = game::OverrideMissShotOffset;
using OverrideMissShotOffset = game::OverrideMissShotOffset;
} // namespace RED4ext

// clang-format on
