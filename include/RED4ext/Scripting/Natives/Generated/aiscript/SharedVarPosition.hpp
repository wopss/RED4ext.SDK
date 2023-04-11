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
struct SharedVarPosition
{
    static constexpr const char* NAME = "aiscriptSharedVarPosition";
    static constexpr const char* ALIAS = "SharedVarPosition";

    uint8_t unk00[0x8 - 0x0]; // 0
    LibTreeSharedVarReferenceName varName; // 08
};
RED4EXT_ASSERT_SIZE(SharedVarPosition, 0x10);
} // namespace aiscript
using aiscriptSharedVarPosition = aiscript::SharedVarPosition;
using SharedVarPosition = aiscript::SharedVarPosition;
} // namespace RED4ext

// clang-format on
