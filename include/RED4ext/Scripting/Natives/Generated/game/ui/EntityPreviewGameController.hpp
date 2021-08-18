#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuGameController.hpp>

namespace RED4ext
{
namespace ent { struct EntityTemplate; }

namespace game::ui { 
struct EntityPreviewGameController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiEntityPreviewGameController";
    static constexpr const char* ALIAS = "inkEntityPreviewGameController";

    uint8_t unkD0[0x128 - 0xD0]; // D0
    RaRef<ent::EntityTemplate> entityToPreview; // 128
    uint8_t unk130[0x140 - 0x130]; // 130
};
RED4EXT_ASSERT_SIZE(EntityPreviewGameController, 0x140);
} // namespace game::ui
using inkEntityPreviewGameController = game::ui::EntityPreviewGameController;
} // namespace RED4ext
