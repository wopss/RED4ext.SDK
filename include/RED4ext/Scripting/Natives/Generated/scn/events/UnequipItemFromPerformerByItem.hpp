#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace scn::events
{
struct UnequipItemFromPerformerByItem : scn::SceneEvent
{
    static constexpr const char* NAME = "scneventsUnequipItemFromPerformerByItem";
    static constexpr const char* ALIAS = NAME;

    scn::PerformerId performerId; // 58
    TweakDBID itemId; // 5C
    bool restoreGameplayItem; // 64
    uint8_t unk65[0x68 - 0x65]; // 65
};
RED4EXT_ASSERT_SIZE(UnequipItemFromPerformerByItem, 0x68);
} // namespace scn::events
using scneventsUnequipItemFromPerformerByItem = scn::events::UnequipItemFromPerformerByItem;
} // namespace RED4ext

// clang-format on
