#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/EntityPreviewCameraSettings.hpp>

namespace RED4ext
{
namespace game::ui { 
struct EntityPreviewGameObject : game::Object
{
    static constexpr const char* NAME = "gameuiEntityPreviewGameObject";
    static constexpr const char* ALIAS = NAME;

    game::ui::EntityPreviewCameraSettings cameraSettings; // 230
    uint8_t unk27C[0x2A8 - 0x27C]; // 27C
};
RED4EXT_ASSERT_SIZE(EntityPreviewGameObject, 0x2A8);
} // namespace game::ui
} // namespace RED4ext
