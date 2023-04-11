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
struct UnequipItemFromPerformer : scn::SceneEvent
{
    static constexpr const char* NAME = "scneventsUnequipItemFromPerformer";
    static constexpr const char* ALIAS = NAME;

    scn::PerformerId performerId; // 58
    TweakDBID slotId; // 5C
    bool restoreGameplayItem; // 64
    uint8_t unk65[0x68 - 0x65]; // 65
};
RED4EXT_ASSERT_SIZE(UnequipItemFromPerformer, 0x68);
} // namespace scn::events
using scneventsUnequipItemFromPerformer = scn::events::UnequipItemFromPerformer;
} // namespace RED4ext

// clang-format on
