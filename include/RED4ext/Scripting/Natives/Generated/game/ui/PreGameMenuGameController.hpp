#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseMenuGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PreGameMenuGameController : game::ui::BaseMenuGameController
{
    static constexpr const char* NAME = "gameuiPreGameMenuGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk140[0x148 - 0x140]; // 140
};
RED4EXT_ASSERT_SIZE(PreGameMenuGameController, 0x148);
} // namespace game::ui
using gameuiPreGameMenuGameController = game::ui::PreGameMenuGameController;
} // namespace RED4ext

// clang-format on
