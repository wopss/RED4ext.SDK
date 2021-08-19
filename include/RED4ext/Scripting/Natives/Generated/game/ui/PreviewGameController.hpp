#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct PreviewGameController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiPreviewGameController";
    static constexpr const char* ALIAS = NAME;

    CName sceneName; // D0
    NodeRef cameraRef; // D8
    uint8_t unkE0[0xF0 - 0xE0]; // E0
    float yawSpeed; // F0
    float yawDefault; // F4
};
RED4EXT_ASSERT_SIZE(PreviewGameController, 0xF8);
} // namespace game::ui
} // namespace RED4ext
