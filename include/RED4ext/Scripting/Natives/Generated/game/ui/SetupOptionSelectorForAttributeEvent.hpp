#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PhotoModeOptionSelectorData.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct SetupOptionSelectorForAttributeEvent : red::Event
{
    static constexpr const char* NAME = "gameuiSetupOptionSelectorForAttributeEvent";
    static constexpr const char* ALIAS = "SetupOptionSelectorForAttributeEvent";

    uint32_t attribute; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    DynArray<game::ui::PhotoModeOptionSelectorData> values; // 48
    int32_t startDataValue; // 58
    bool doApply; // 5C
    uint8_t unk5D[0x60 - 0x5D]; // 5D
};
RED4EXT_ASSERT_SIZE(SetupOptionSelectorForAttributeEvent, 0x60);
} // namespace game::ui
using gameuiSetupOptionSelectorForAttributeEvent = game::ui::SetupOptionSelectorForAttributeEvent;
using SetupOptionSelectorForAttributeEvent = game::ui::SetupOptionSelectorForAttributeEvent;
} // namespace RED4ext

// clang-format on
