#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IInventoryListener.hpp>

namespace RED4ext
{
namespace quest
{
struct ObjectInventoryListener : game::IInventoryListener
{
    static constexpr const char* NAME = "questObjectInventoryListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ObjectInventoryListener, 0x50);
} // namespace quest
using questObjectInventoryListener = quest::ObjectInventoryListener;
} // namespace RED4ext

// clang-format on
