#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseMinimapMappinController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct MinimapStubMappinController : game::ui::BaseMinimapMappinController
{
    static constexpr const char* NAME = "gameuiMinimapStubMappinController";
    static constexpr const char* ALIAS = "MinimapStubMappinController";

};
RED4EXT_ASSERT_SIZE(MinimapStubMappinController, 0x228);
} // namespace game::ui
using gameuiMinimapStubMappinController = game::ui::MinimapStubMappinController;
using MinimapStubMappinController = game::ui::MinimapStubMappinController;
} // namespace RED4ext

// clang-format on
