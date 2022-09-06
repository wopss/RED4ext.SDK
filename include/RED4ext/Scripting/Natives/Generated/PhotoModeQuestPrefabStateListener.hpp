#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IQuestPrefabStateListener.hpp>

namespace RED4ext
{
struct PhotoModeQuestPrefabStateListener : world::IQuestPrefabStateListener
{
    static constexpr const char* NAME = "PhotoModeQuestPrefabStateListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x40 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(PhotoModeQuestPrefabStateListener, 0x40);
} // namespace RED4ext

// clang-format on
