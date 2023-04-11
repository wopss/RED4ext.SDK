#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game::ui
{
struct MinigameProgramData
{
    static constexpr const char* NAME = "gameuiMinigameProgramData";
    static constexpr const char* ALIAS = "MinigameProgramData";

    TweakDBID actionID; // 00
    CName programName; // 08
};
RED4EXT_ASSERT_SIZE(MinigameProgramData, 0x10);
} // namespace game::ui
using gameuiMinigameProgramData = game::ui::MinigameProgramData;
using MinigameProgramData = game::ui::MinigameProgramData;
} // namespace RED4ext

// clang-format on
