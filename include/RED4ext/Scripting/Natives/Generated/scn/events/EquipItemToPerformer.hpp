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
struct EquipItemToPerformer : scn::SceneEvent
{
    static constexpr const char* NAME = "scneventsEquipItemToPerformer";
    static constexpr const char* ALIAS = NAME;

    scn::PerformerId performerId; // 58
    TweakDBID slotId; // 5C
    TweakDBID itemId; // 64
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(EquipItemToPerformer, 0x70);
} // namespace scn::events
using scneventsEquipItemToPerformer = scn::events::EquipItemToPerformer;
} // namespace RED4ext

// clang-format on
