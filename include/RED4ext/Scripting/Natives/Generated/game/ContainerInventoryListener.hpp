#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IInventoryListener.hpp>

namespace RED4ext
{
namespace game
{
struct ContainerInventoryListener : game::IInventoryListener
{
    static constexpr const char* NAME = "gameContainerInventoryListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ContainerInventoryListener, 0x48);
} // namespace game
using gameContainerInventoryListener = game::ContainerInventoryListener;
} // namespace RED4ext

// clang-format on
