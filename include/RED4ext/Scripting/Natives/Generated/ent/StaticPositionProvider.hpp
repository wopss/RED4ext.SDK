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
struct StaticPositionProvider : ent::IPositionProvider
{
    static constexpr const char* NAME = "entStaticPositionProvider";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(StaticPositionProvider, 0x60);
} // namespace ent
using entStaticPositionProvider = ent::StaticPositionProvider;
} // namespace RED4ext

// clang-format on
