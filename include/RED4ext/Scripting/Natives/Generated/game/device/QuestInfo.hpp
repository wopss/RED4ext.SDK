#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace game::device
{
struct QuestInfo
{
    static constexpr const char* NAME = "gamedeviceQuestInfo";
    static constexpr const char* ALIAS = "QuestInfo";

    CName factName; // 00
    bool isHighlighted; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(QuestInfo, 0x10);
} // namespace game::device
using gamedeviceQuestInfo = game::device::QuestInfo;
using QuestInfo = game::device::QuestInfo;
} // namespace RED4ext

// clang-format on
