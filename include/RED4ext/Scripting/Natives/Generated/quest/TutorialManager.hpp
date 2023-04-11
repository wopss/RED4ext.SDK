#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ITutorialManager.hpp>

namespace RED4ext
{
namespace quest
{
struct TutorialManager : quest::ITutorialManager
{
    static constexpr const char* NAME = "questTutorialManager";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xA0 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(TutorialManager, 0xA0);
} // namespace quest
using questTutorialManager = quest::TutorialManager;
} // namespace RED4ext

// clang-format on
