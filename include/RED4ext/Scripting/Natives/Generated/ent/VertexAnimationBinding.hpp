#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ISourceBinding.hpp>

namespace RED4ext
{
namespace ent
{
struct VertexAnimationBinding : ent::ISourceBinding
{
    static constexpr const char* NAME = "entVertexAnimationBinding";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(VertexAnimationBinding, 0x70);
} // namespace ent
using entVertexAnimationBinding = ent::VertexAnimationBinding;
} // namespace RED4ext

// clang-format on
