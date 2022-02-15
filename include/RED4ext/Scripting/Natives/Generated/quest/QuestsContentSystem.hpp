#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IQuestsContentSystem.hpp>

namespace RED4ext
{
namespace quest { 
struct QuestsContentSystem : quest::IQuestsContentSystem
{
    static constexpr const char* NAME = "questQuestsContentSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x100 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(QuestsContentSystem, 0x100);
} // namespace quest
} // namespace RED4ext
