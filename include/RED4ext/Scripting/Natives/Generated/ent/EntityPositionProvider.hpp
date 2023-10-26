#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPositionProvider.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) EntityPositionProvider : ent::IPositionProvider
{
    static constexpr const char* NAME = "entEntityPositionProvider";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk50[0x80 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(EntityPositionProvider, 0x80);
} // namespace ent
using entEntityPositionProvider = ent::EntityPositionProvider;
} // namespace RED4ext

// clang-format on
