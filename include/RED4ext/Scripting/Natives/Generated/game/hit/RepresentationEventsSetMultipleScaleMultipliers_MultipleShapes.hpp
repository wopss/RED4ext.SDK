#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::hit
{
struct RepresentationEventsSetMultipleScaleMultipliers_MultipleShapes : red::Event
{
    static constexpr const char* NAME = "gamehitRepresentationEventsSetMultipleScaleMultipliers_MultipleShapes";
    static constexpr const char* ALIAS = "HitRepresentation_SetMultipleScaleMultipliers_MultipleShapes";

    DynArray<Vector4> scaleMultipliers; // 40
    DynArray<CName> shapeNames; // 50
};
RED4EXT_ASSERT_SIZE(RepresentationEventsSetMultipleScaleMultipliers_MultipleShapes, 0x60);
} // namespace game::hit
using gamehitRepresentationEventsSetMultipleScaleMultipliers_MultipleShapes = game::hit::RepresentationEventsSetMultipleScaleMultipliers_MultipleShapes;
using HitRepresentation_SetMultipleScaleMultipliers_MultipleShapes = game::hit::RepresentationEventsSetMultipleScaleMultipliers_MultipleShapes;
} // namespace RED4ext

// clang-format on
