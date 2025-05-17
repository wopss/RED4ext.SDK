#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class DamageListenerPipelineType : uint32_t
{
    None = 0,
    Damage = 1,
    ProjectedDamage = 2,
    All = 4294967295,
};
} // namespace game
using gameDamageListenerPipelineType = game::DamageListenerPipelineType;
using DMGPipelineType = game::DamageListenerPipelineType;
} // namespace RED4ext

// clang-format on
