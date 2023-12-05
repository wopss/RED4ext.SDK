#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MappinsContainerController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct WorldMappinsContainerController : game::ui::MappinsContainerController
{
    static constexpr const char* NAME = "gameuiWorldMappinsContainerController";
    static constexpr const char* ALIAS = "WorldMappinsContainerController";

    uint8_t unk2E8[0x3D8 - 0x2E8]; // 2E8
};
RED4EXT_ASSERT_SIZE(WorldMappinsContainerController, 0x3D8);
} // namespace game::ui
using gameuiWorldMappinsContainerController = game::ui::WorldMappinsContainerController;
using WorldMappinsContainerController = game::ui::WorldMappinsContainerController;
} // namespace RED4ext

// clang-format on
