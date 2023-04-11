#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/MenuGameController.hpp>

namespace RED4ext
{
namespace ent { struct EntityTemplate; }

namespace game::ui
{
struct EntityPreviewGameController : game::ui::MenuGameController
{
    static constexpr const char* NAME = "gameuiEntityPreviewGameController";
    static constexpr const char* ALIAS = "inkEntityPreviewGameController";

    uint8_t unkF0[0x148 - 0xF0]; // F0
    RaRef<ent::EntityTemplate> entityToPreview; // 148
    uint8_t unk150[0x160 - 0x150]; // 150
};
RED4EXT_ASSERT_SIZE(EntityPreviewGameController, 0x160);
} // namespace game::ui
using gameuiEntityPreviewGameController = game::ui::EntityPreviewGameController;
using inkEntityPreviewGameController = game::ui::EntityPreviewGameController;
} // namespace RED4ext

// clang-format on
