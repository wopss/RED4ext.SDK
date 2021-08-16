#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/scn/PerformerId.hpp>
#include <RED4ext/Types/generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace scn::events { 
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
} // namespace RED4ext
