#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectFilter_HitRepresentation.hpp>

namespace RED4ext
{
namespace game
{
struct EffectObjectFilter_HitRepresentation_Raycast : game::EffectObjectFilter_HitRepresentation
{
    static constexpr const char* NAME = "gameEffectObjectFilter_HitRepresentation_Raycast";
    static constexpr const char* ALIAS = NAME;

    bool isPreview; // 40
    bool fillNearlyHitData; // 41
    uint8_t unk42[0x48 - 0x42]; // 42
};
RED4EXT_ASSERT_SIZE(EffectObjectFilter_HitRepresentation_Raycast, 0x48);
} // namespace game
using gameEffectObjectFilter_HitRepresentation_Raycast = game::EffectObjectFilter_HitRepresentation_Raycast;
} // namespace RED4ext

// clang-format on
