#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/Factory.hpp>

namespace RED4ext
{
namespace ent
{
struct GenericListFactory : ent::Factory
{
    static constexpr const char* NAME = "entGenericListFactory";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0xC0 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(GenericListFactory, 0xC0);
} // namespace ent
using entGenericListFactory = ent::GenericListFactory;
} // namespace RED4ext

// clang-format on
