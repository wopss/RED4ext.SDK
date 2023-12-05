#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IQuestsHelper.hpp>

namespace RED4ext
{
namespace quest
{
struct QuestsHelper : quest::IQuestsHelper
{
    static constexpr const char* NAME = "questQuestsHelper";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0x1A8 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(QuestsHelper, 0x1A8);
} // namespace quest
using questQuestsHelper = quest::QuestsHelper;
} // namespace RED4ext

// clang-format on
