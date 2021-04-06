#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>
#include <RED4ext/Types/generated/game/ui/EntityPreviewCameraSettings.hpp>

namespace RED4ext
{
namespace game::ui { 
struct EntityPreviewGameObject : game::Object
{
    static constexpr const char* NAME = "gameuiEntityPreviewGameObject";
    static constexpr const char* ALIAS = NAME;

    game::ui::EntityPreviewCameraSettings cameraSettings; // 228
    uint8_t unk274[0x2A0 - 0x274]; // 274
};
RED4EXT_ASSERT_SIZE(EntityPreviewGameObject, 0x2A0);
} // namespace game::ui
} // namespace RED4ext
