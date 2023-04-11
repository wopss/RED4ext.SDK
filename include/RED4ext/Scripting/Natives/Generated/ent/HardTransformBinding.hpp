#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ITransformBinding.hpp>

namespace RED4ext
{
namespace ent
{
struct HardTransformBinding : ent::ITransformBinding
{
    static constexpr const char* NAME = "entHardTransformBinding";
    static constexpr const char* ALIAS = NAME;

    CName slotName; // 70
};
RED4EXT_ASSERT_SIZE(HardTransformBinding, 0x78);
} // namespace ent
using entHardTransformBinding = ent::HardTransformBinding;
} // namespace RED4ext

// clang-format on
