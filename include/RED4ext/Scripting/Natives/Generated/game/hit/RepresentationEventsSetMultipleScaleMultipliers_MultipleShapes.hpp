#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::hit { 
struct RepresentationEventsSetMultipleScaleMultipliers_MultipleShapes : red::Event
{
    static constexpr const char* NAME = "gamehitRepresentationEventsSetMultipleScaleMultipliers_MultipleShapes";
    static constexpr const char* ALIAS = NAME;

    DynArray<Vector4> scaleMultipliers; // 40
    DynArray<CName> shapeNames; // 50
};
RED4EXT_ASSERT_SIZE(RepresentationEventsSetMultipleScaleMultipliers_MultipleShapes, 0x60);
} // namespace game::hit
} // namespace RED4ext
