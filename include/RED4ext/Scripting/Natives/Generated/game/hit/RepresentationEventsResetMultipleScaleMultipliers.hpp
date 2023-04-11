#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::hit
{
struct RepresentationEventsResetMultipleScaleMultipliers : red::Event
{
    static constexpr const char* NAME = "gamehitRepresentationEventsResetMultipleScaleMultipliers";
    static constexpr const char* ALIAS = "HitRepresentation_ResetMultipleScaleMultipliers";

    DynArray<CName> shapeNames; // 40
};
RED4EXT_ASSERT_SIZE(RepresentationEventsResetMultipleScaleMultipliers, 0x50);
} // namespace game::hit
using gamehitRepresentationEventsResetMultipleScaleMultipliers = game::hit::RepresentationEventsResetMultipleScaleMultipliers;
using HitRepresentation_ResetMultipleScaleMultipliers = game::hit::RepresentationEventsResetMultipleScaleMultipliers;
} // namespace RED4ext

// clang-format on
