#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseMenuGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct GlamdocGameController : game::ui::BaseMenuGameController
{
    static constexpr const char* NAME = "gameuiGlamdocGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk140[0x150 - 0x140]; // 140
    CName previewSceneName; // 150
    uint8_t unk158[0x16C - 0x158]; // 158
    float timeToWaitToRevealPreview; // 16C
    uint8_t unk170[0x178 - 0x170]; // 170
};
RED4EXT_ASSERT_SIZE(GlamdocGameController, 0x178);
} // namespace game::ui
using gameuiGlamdocGameController = game::ui::GlamdocGameController;
} // namespace RED4ext

// clang-format on
