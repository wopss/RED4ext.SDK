#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ShooterExplodingPlatformsImageWidgetDetail.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/arcade/ShooterLayerInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui::arcade
{
struct ShooterBackgroundController : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiarcadeShooterBackgroundController";
    static constexpr const char* ALIAS = NAME;

    bool allowMarginTranslation; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
    DynArray<game::ui::arcade::ShooterLayerInfo> layerInfo; // 80
    DynArray<game::ui::arcade::ShooterExplodingPlatformsImageWidgetDetail> expPlatformImageDetails; // 90
};
RED4EXT_ASSERT_SIZE(ShooterBackgroundController, 0xA0);
} // namespace game::ui::arcade
using gameuiarcadeShooterBackgroundController = game::ui::arcade::ShooterBackgroundController;
} // namespace RED4ext

// clang-format on
