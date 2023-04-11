#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/EntityPreviewCameraSettings.hpp>

namespace RED4ext
{
namespace game::ui
{
struct EntityPreviewGameObject : game::Object
{
    static constexpr const char* NAME = "gameuiEntityPreviewGameObject";
    static constexpr const char* ALIAS = NAME;

    game::ui::EntityPreviewCameraSettings cameraSettings; // 240
    uint8_t unk28C[0x2B8 - 0x28C]; // 28C
};
RED4EXT_ASSERT_SIZE(EntityPreviewGameObject, 0x2B8);
} // namespace game::ui
using gameuiEntityPreviewGameObject = game::ui::EntityPreviewGameObject;
} // namespace RED4ext

// clang-format on
