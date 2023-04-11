#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/OnscreenVOPlayerController.hpp>

namespace RED4ext
{
namespace ink
{
struct InitialLoadingControllerSupervisor : game::ui::OnscreenVOPlayerController
{
    static constexpr const char* NAME = "inkInitialLoadingControllerSupervisor";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(InitialLoadingControllerSupervisor, 0x150);
} // namespace ink
using inkInitialLoadingControllerSupervisor = ink::InitialLoadingControllerSupervisor;
} // namespace RED4ext

// clang-format on
