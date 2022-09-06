#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/IParticleModificator.hpp>

namespace RED4ext
{
struct IEvaluatorFloat;

struct CParticleModificatorSizeByDistance : IParticleModificator
{
    static constexpr const char* NAME = "CParticleModificatorSizeByDistance";
    static constexpr const char* ALIAS = NAME;

    Handle<IEvaluatorFloat> nearDistanceRangeStart; // 80
    Handle<IEvaluatorFloat> nearDistanceRangeEnd; // 90
    Handle<IEvaluatorFloat> nearDistanceSizeMultiplier; // A0
    Handle<IEvaluatorFloat> farDistanceRangeStart; // B0
    Handle<IEvaluatorFloat> farDistanceRangeEnd; // C0
    Handle<IEvaluatorFloat> farDistanceSizeMultiplier; // D0
};
RED4EXT_ASSERT_SIZE(CParticleModificatorSizeByDistance, 0xE0);
} // namespace RED4ext

// clang-format on
