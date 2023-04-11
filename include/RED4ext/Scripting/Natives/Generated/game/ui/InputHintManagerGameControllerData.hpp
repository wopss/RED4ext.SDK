#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/BaseUIData.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/InputHintData.hpp>

namespace RED4ext
{
namespace game::ui
{
struct InputHintManagerGameControllerData : game::ui::BaseUIData
{
    static constexpr const char* NAME = "gameuiInputHintManagerGameControllerData";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::ui::InputHintData> inputHintsData; // 38
    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(InputHintManagerGameControllerData, 0x58);
} // namespace game::ui
using gameuiInputHintManagerGameControllerData = game::ui::InputHintManagerGameControllerData;
} // namespace RED4ext

// clang-format on
