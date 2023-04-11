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
struct IEffectParameter_StringEvaluator : ISerializable
{
    static constexpr const char* NAME = "gameIEffectParameter_StringEvaluator";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IEffectParameter_StringEvaluator, 0x30);
} // namespace game
using gameIEffectParameter_StringEvaluator = game::IEffectParameter_StringEvaluator;
} // namespace RED4ext

// clang-format on
