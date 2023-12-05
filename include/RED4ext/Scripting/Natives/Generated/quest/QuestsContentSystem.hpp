#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IQuestsContentSystem.hpp>

namespace RED4ext
{
namespace quest
{
struct QuestsContentSystem : quest::IQuestsContentSystem
{
    static constexpr const char* NAME = "questQuestsContentSystem";
    static constexpr const char* ALIAS = "QuestsContentSystem";

    uint8_t unk48[0x150 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(QuestsContentSystem, 0x150);
} // namespace quest
using questQuestsContentSystem = quest::QuestsContentSystem;
using QuestsContentSystem = quest::QuestsContentSystem;
} // namespace RED4ext

// clang-format on
