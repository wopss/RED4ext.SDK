#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IContainerManager.hpp>

namespace RED4ext
{
namespace game
{
struct ContainerManager : game::IContainerManager
{
    static constexpr const char* NAME = "gameContainerManager";
    static constexpr const char* ALIAS = "ContainerManager";

    uint8_t unk48[0x270 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ContainerManager, 0x270);
} // namespace game
using gameContainerManager = game::ContainerManager;
using ContainerManager = game::ContainerManager;
} // namespace RED4ext

// clang-format on
