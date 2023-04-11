#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IQuestPrefabStateListener.hpp>

namespace RED4ext
{
namespace quest
{
struct PhonePrefabsListener : world::IQuestPrefabStateListener
{
    static constexpr const char* NAME = "questPhonePrefabsListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x48 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(PhonePrefabsListener, 0x48);
} // namespace quest
using questPhonePrefabsListener = quest::PhonePrefabsListener;
} // namespace RED4ext

// clang-format on
