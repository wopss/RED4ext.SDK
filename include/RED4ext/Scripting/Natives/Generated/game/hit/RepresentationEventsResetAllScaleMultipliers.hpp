#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::hit
{
struct RepresentationEventsResetAllScaleMultipliers : red::Event
{
    static constexpr const char* NAME = "gamehitRepresentationEventsResetAllScaleMultipliers";
    static constexpr const char* ALIAS = "HitRepresentation_ResetAllScaleMultipliers";

};
RED4EXT_ASSERT_SIZE(RepresentationEventsResetAllScaleMultipliers, 0x40);
} // namespace game::hit
using gamehitRepresentationEventsResetAllScaleMultipliers = game::hit::RepresentationEventsResetAllScaleMultipliers;
using HitRepresentation_ResetAllScaleMultipliers = game::hit::RepresentationEventsResetAllScaleMultipliers;
} // namespace RED4ext

// clang-format on
