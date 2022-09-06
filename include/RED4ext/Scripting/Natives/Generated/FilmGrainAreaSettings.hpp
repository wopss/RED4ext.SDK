#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
struct FilmGrainAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "FilmGrainAreaSettings";
    static constexpr const char* ALIAS = NAME;

    CurveData<Vector4> strength; // 48
    CurveData<float> luminanceBias; // 80
    Vector3 grainSize; // B8
    bool applyAfterUpsampling; // C4
    uint8_t unkC5[0xC8 - 0xC5]; // C5
};
RED4EXT_ASSERT_SIZE(FilmGrainAreaSettings, 0xC8);
} // namespace RED4ext

// clang-format on
