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
struct IEffectParameter_FloatEvaluator : ISerializable
{
    static constexpr const char* NAME = "gameIEffectParameter_FloatEvaluator";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IEffectParameter_FloatEvaluator, 0x30);
} // namespace game
using gameIEffectParameter_FloatEvaluator = game::IEffectParameter_FloatEvaluator;
} // namespace RED4ext

// clang-format on
