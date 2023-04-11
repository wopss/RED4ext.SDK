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
struct DebugPositionProvider : ent::IPositionProvider
{
    static constexpr const char* NAME = "entDebugPositionProvider";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk50[0x90 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(DebugPositionProvider, 0x90);
} // namespace ent
using entDebugPositionProvider = ent::DebugPositionProvider;
} // namespace RED4ext

// clang-format on
