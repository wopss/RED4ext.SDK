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
struct EffectObjectFilter_HitRepresentation_Capsule : game::EffectObjectFilter_HitRepresentation
{
    static constexpr const char* NAME = "gameEffectObjectFilter_HitRepresentation_Capsule";
    static constexpr const char* ALIAS = NAME;

    bool flattenCapsuleToHeight; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(EffectObjectFilter_HitRepresentation_Capsule, 0x48);
} // namespace game
using gameEffectObjectFilter_HitRepresentation_Capsule = game::EffectObjectFilter_HitRepresentation_Capsule;
} // namespace RED4ext

// clang-format on
