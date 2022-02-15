#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MappinsContainerController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct CyberspaceMappinsContainerController : game::ui::MappinsContainerController
{
    static constexpr const char* NAME = "gameuiCyberspaceMappinsContainerController";
    static constexpr const char* ALIAS = "CyberspaceMappinsContainerController";

};
RED4EXT_ASSERT_SIZE(CyberspaceMappinsContainerController, 0x2D0);
} // namespace game::ui
using CyberspaceMappinsContainerController = game::ui::CyberspaceMappinsContainerController;
} // namespace RED4ext
