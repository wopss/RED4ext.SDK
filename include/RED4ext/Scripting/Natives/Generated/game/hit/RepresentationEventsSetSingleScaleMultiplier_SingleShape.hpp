#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/hit/RepresentationEventsSetSingleScaleMultiplier_AllShapes.hpp>

namespace RED4ext
{
namespace game::hit { 
struct RepresentationEventsSetSingleScaleMultiplier_SingleShape : game::hit::RepresentationEventsSetSingleScaleMultiplier_AllShapes
{
    static constexpr const char* NAME = "gamehitRepresentationEventsSetSingleScaleMultiplier_SingleShape";
    static constexpr const char* ALIAS = "HitRepresentation_SetSingleScaleMultiplier_SingleShape";

    CName shapeName; // 50
    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(RepresentationEventsSetSingleScaleMultiplier_SingleShape, 0x60);
} // namespace game::hit
using HitRepresentation_SetSingleScaleMultiplier_SingleShape = game::hit::RepresentationEventsSetSingleScaleMultiplier_SingleShape;
} // namespace RED4ext
