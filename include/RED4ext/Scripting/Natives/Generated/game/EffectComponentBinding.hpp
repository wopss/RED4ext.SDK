#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ISourceBinding.hpp>

namespace RED4ext
{
namespace game
{
struct EffectComponentBinding : ent::ISourceBinding
{
    static constexpr const char* NAME = "gameEffectComponentBinding";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectComponentBinding, 0x70);
} // namespace game
using gameEffectComponentBinding = game::EffectComponentBinding;
} // namespace RED4ext

// clang-format on
