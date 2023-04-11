#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct ScannerGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiScannerGameController";
    static constexpr const char* ALIAS = "scannerGameController";

    ent::EntityID currentTarget; // F8
    bool scanLock; // 100
    uint8_t unk101[0x104 - 0x101]; // 101
    float percentValue; // 104
    float oldPercentValue; // 108
    uint8_t unk10C[0x110 - 0x10C]; // 10C
};
RED4EXT_ASSERT_SIZE(ScannerGameController, 0x110);
} // namespace game::ui
using gameuiScannerGameController = game::ui::ScannerGameController;
using scannerGameController = game::ui::ScannerGameController;
} // namespace RED4ext

// clang-format on
