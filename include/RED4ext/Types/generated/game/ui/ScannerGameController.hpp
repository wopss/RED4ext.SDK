#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ent/EntityID.hpp>
#include <RED4ext/Types/generated/game/ui/HUDGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct ScannerGameController : game::ui::HUDGameController
{
    static constexpr const char* NAME = "gameuiScannerGameController";
    static constexpr const char* ALIAS = "scannerGameController";

    ent::EntityID currentTarget; // E8
    bool scanLock; // F0
    uint8_t unkF1[0xF4 - 0xF1]; // F1
    float percentValue; // F4
    float oldPercentValue; // F8
    uint8_t unkFC[0x100 - 0xFC]; // FC
};
RED4EXT_ASSERT_SIZE(ScannerGameController, 0x100);
} // namespace game::ui
using scannerGameController = game::ui::ScannerGameController;
} // namespace RED4ext
