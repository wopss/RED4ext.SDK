#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::hit { 
struct RepresentationEventsResetMultipleScaleMultipliers : red::Event
{
    static constexpr const char* NAME = "gamehitRepresentationEventsResetMultipleScaleMultipliers";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> shapeNames; // 40
};
RED4EXT_ASSERT_SIZE(RepresentationEventsResetMultipleScaleMultipliers, 0x50);
} // namespace game::hit
} // namespace RED4ext
