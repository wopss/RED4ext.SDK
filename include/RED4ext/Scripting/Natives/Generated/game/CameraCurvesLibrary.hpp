#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/Entity.hpp>

namespace RED4ext
{
namespace game { struct CameraCurveSet; }

namespace game
{
struct CameraCurvesLibrary : ent::Entity
{
    static constexpr const char* NAME = "gameCameraCurvesLibrary";
    static constexpr const char* ALIAS = NAME;

    DynArray<Ref<game::CameraCurveSet>> cameraCurves; // 160
};
RED4EXT_ASSERT_SIZE(CameraCurvesLibrary, 0x170);
} // namespace game
using gameCameraCurvesLibrary = game::CameraCurvesLibrary;
} // namespace RED4ext

// clang-format on
