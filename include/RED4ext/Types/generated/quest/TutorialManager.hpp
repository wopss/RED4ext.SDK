#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/quest/ITutorialManager.hpp>

namespace RED4ext
{
namespace quest { 
struct TutorialManager : quest::ITutorialManager
{
    static constexpr const char* NAME = "questTutorialManager";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x90 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(TutorialManager, 0x90);
} // namespace quest
} // namespace RED4ext
