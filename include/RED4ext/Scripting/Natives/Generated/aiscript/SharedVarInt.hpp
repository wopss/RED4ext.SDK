#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeSharedVarReferenceName.hpp>

namespace RED4ext
{
namespace aiscript
{
struct SharedVarInt
{
    static constexpr const char* NAME = "aiscriptSharedVarInt";
    static constexpr const char* ALIAS = "SharedVarInt";

    uint8_t unk00[0x8 - 0x0]; // 0
    LibTreeSharedVarReferenceName varName; // 08
};
RED4EXT_ASSERT_SIZE(SharedVarInt, 0x10);
} // namespace aiscript
using aiscriptSharedVarInt = aiscript::SharedVarInt;
using SharedVarInt = aiscript::SharedVarInt;
} // namespace RED4ext

// clang-format on
