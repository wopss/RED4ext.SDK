#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MappinsContainerController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct WorldMappinsContainerController : game::ui::MappinsContainerController
{
    static constexpr const char* NAME = "gameuiWorldMappinsContainerController";
    static constexpr const char* ALIAS = "WorldMappinsContainerController";

    uint8_t unk2D0[0x368 - 0x2D0]; // 2D0
};
RED4EXT_ASSERT_SIZE(WorldMappinsContainerController, 0x368);
} // namespace game::ui
using WorldMappinsContainerController = game::ui::WorldMappinsContainerController;
} // namespace RED4ext
