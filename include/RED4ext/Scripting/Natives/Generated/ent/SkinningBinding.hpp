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
struct SkinningBinding : ent::ISourceBinding
{
    static constexpr const char* NAME = "entSkinningBinding";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(SkinningBinding, 0x70);
} // namespace ent
using entSkinningBinding = ent::SkinningBinding;
} // namespace RED4ext

// clang-format on
