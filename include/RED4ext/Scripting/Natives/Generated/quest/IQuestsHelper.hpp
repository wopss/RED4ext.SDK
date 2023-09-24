#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace quest
{
struct IQuestsHelper : game::IGameSystem
{
    static constexpr const char* NAME = "questIQuestsHelper";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x90 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(IQuestsHelper, 0x90);
} // namespace quest
using questIQuestsHelper = quest::IQuestsHelper;
} // namespace RED4ext

// clang-format on
