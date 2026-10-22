#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PreviewGameController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiPreviewGameController";
    static constexpr const char* ALIAS = "inkPreviewGameController";

    CName sceneName; // 100
    NodeRef cameraRef; // 108
    uint8_t unk110[0x120 - 0x110]; // 110
    float yawSpeed; // 120
    float yawDefault; // 124
};
RED4EXT_ASSERT_SIZE(PreviewGameController, 0x128);
} // namespace game::ui
using gameuiPreviewGameController = game::ui::PreviewGameController;
using inkPreviewGameController = game::ui::PreviewGameController;
} // namespace RED4ext

// clang-format on
