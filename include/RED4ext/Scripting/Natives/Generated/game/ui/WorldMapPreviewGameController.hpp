#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuGameController.hpp>

namespace RED4ext
{
namespace ent { struct EntityTemplate; }
namespace world { struct EnvironmentAreaParameters; }

namespace game::ui { 
struct WorldMapPreviewGameController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiWorldMapPreviewGameController";
    static constexpr const char* ALIAS = "inkWorldMapPreviewGameController";

    uint8_t unkD0[0x198 - 0xD0]; // D0
    RaRef<ent::EntityTemplate> viewTemplate; // 198
    Ref<world::EnvironmentAreaParameters> viewEnvironmentDefinition; // 1A0
    RaRef<ent::EntityTemplate> cursorTemplate; // 1B8
};
RED4EXT_ASSERT_SIZE(WorldMapPreviewGameController, 0x1C0);
} // namespace game::ui
using inkWorldMapPreviewGameController = game::ui::WorldMapPreviewGameController;
} // namespace RED4ext
