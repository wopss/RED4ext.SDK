#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game
{
struct EffectVectorEvaluator : ISerializable
{
    static constexpr const char* NAME = "gameEffectVectorEvaluator";
    static constexpr const char* ALIAS = NAME;

    float modifier; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(EffectVectorEvaluator, 0x38);
} // namespace game
using gameEffectVectorEvaluator = game::EffectVectorEvaluator;
} // namespace RED4ext

// clang-format on
