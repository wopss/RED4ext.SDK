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
struct CyberspaceMappinsContainerController : game::ui::MappinsContainerController
{
    static constexpr const char* NAME = "gameuiCyberspaceMappinsContainerController";
    static constexpr const char* ALIAS = "CyberspaceMappinsContainerController";

};
RED4EXT_ASSERT_SIZE(CyberspaceMappinsContainerController, 0x340);
} // namespace game::ui
using gameuiCyberspaceMappinsContainerController = game::ui::CyberspaceMappinsContainerController;
using CyberspaceMappinsContainerController = game::ui::CyberspaceMappinsContainerController;
} // namespace RED4ext

// clang-format on
