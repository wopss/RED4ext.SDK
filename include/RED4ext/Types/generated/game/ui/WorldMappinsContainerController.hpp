#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/ui/MappinsContainerController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct WorldMappinsContainerController : game::ui::MappinsContainerController
{
    static constexpr const char* NAME = "gameuiWorldMappinsContainerController";
    static constexpr const char* ALIAS = "WorldMappinsContainerController";

    uint8_t unk290[0x300 - 0x290]; // 290
};
RED4EXT_ASSERT_SIZE(WorldMappinsContainerController, 0x300);
} // namespace game::ui
using WorldMappinsContainerController = game::ui::WorldMappinsContainerController;
} // namespace RED4ext
